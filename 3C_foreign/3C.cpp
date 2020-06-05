#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, k, temp = 0;
    cin >> n >> k;
    temp = k;
    int pivot = 0;
    std::vector<int> arr(k);

    for (int i = 2; i < sqrt(n) + 1; ++i)
    {
        while ((n % i == 0) && (k > 1))
        {
            arr[pivot++] = i;
            n /= i;
            --k;
        }
        if (k == 1)
        {
            break;
        }
    }

    arr[pivot] = n;
    if ((pivot + 1 == temp) && (n != 1))
    {
        for (int i = 0; i < pivot + 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}
