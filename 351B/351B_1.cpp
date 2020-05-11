#include <iostream>
using namespace std;
// recurrent formula to count the expectation value
long long expValue(long long n)
{
    if (n == 1)
        return 1;

    if (n == 0)
        return 0;
    else
        return 4 + expValue(n - 2);
}

int main()
{
    long long n = 0, countInv = 0;
    cin >> n;

    int arr[3001] = {};

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    // count inversions
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (arr[i] > arr[j])
                countInv++;

    cout << expValue(countInv);

    return 0;
}