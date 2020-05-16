#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n >> m >> i >> j;

    if (m == 1)
    {
        cout << fixed << setprecision(7) << (n - i) * 2;
        return 0;
    }

    if (i == n)
    {
        cout << fixed << setprecision(7) << 0;
        return 0;
    }

    long double arrA[1000] = {}, arrB[1000] = {}, arrC[1000] = {};
    for (int g = i; g < n; ++g)
    {
        for (int j = 0; j < m; ++j)
            arrB[j] = 0;
        for (int tochnost = 0; tochnost < 99; ++tochnost)
        {
            arrC[0] = 1 + (arrB[0] + arrB[1] + arrA[0]) / 3;
            for (int i = 1; i < m - 1; ++i)
                arrC[i] = 1 + (arrB[i] + arrB[i - 1] + arrB[i + 1] + arrA[i]) / 4;
            arrC[m - 1] = 1 + (arrB[m - 1] + arrB[m - 2] + arrA[m - 1]) / 3;
            for (int j = 0; j < m; ++j)
                arrB[j] = arrC[j];
        }
        for (int j = 0; j < m; ++j)
            arrA[j] = arrC[j];
    }
    cout << fixed << setprecision(7) << arrA[j - 1];
    return 0;
}
