#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        int c = a;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        if (gcd(i, n - 1) == 1)
            count++;
    cout << count;

    return 0;
}
