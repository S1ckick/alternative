#include <iostream>
#include <cmath>

using namespace std;

int delitel(int k)
{
    int i = 2;

    while (k % i != 0)
    {
        i++;
    }

    return i;
}

int main()
{
    int t, n, k;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> n >> k;

        cout << n + delitel(n) + 2 * (k - 1) << endl;
    }

    return 0;
}
