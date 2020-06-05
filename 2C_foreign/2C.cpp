#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (arr[0] == arr[1])
    {
        cout << " " << arr[0] << " " << arr[0];
    }

    else
    {
        int i = 0;

        while (i < n && (arr[0] % arr[i] == 0))
        {
            i++;
            if (arr[i] == arr[i + 1])
            {
                cout << arr[0] << " " << arr[i + 1];
                return 0;
            }
        }
        cout << arr[0] << " " << arr[i];
    }

    return 0;
}
