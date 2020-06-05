#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long int n;
        cin >> n;
        long long unsigned int del[305] = {0};
        //завожу массив
        for (long long unsigned int j = 0; j < n; j++)
        {
            cin >> del[j];
        }
        // сортирую массив
        for (long long unsigned int k = 0; k < n - 1; k++)
            for (long long unsigned int c = 0; c < n - k - 1; c++)
            {
                if (del[c] > del[c + 1])
                {
                    long long unsigned int temp = del[c];
                    del[c] = del[c + 1];
                    del[c + 1] = temp;
                }
            }
        //нахожу число
        long long unsigned int res = del[0] * del[n - 1];

        int count = 0;
        long long unsigned int k;
        long long unsigned int del_check[305] = {0};
        long long unsigned int n_2 = 0;
        for (k = 2; k <= sqrt(res); k++)
        {
            if (res % k == 0)
                n_2++;
        }
        k--;
        if (k * k == res)
            n_2 = 2 * n_2 - 1;
        else
            n_2 = 2 * n_2;
        if (n_2 != n)
            cout << "-1" << endl;
        else
        {
            for (long long unsigned int k = 2; k <= sqrt(res); k++)
            {
                if (res % k == 0)
                {
                    del_check[count] = k;
                    del_check[n_2 - count - 1] = res / k;
                    count++;
                }
            }
            bool check = true;
            for (long long unsigned int k = 0; k < n_2; k++)
            {
                if (del[k] != del_check[k])
                    check = false;
            }
            if (check)
                cout << res << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}
