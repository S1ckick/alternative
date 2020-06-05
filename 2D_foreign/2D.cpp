#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;
long long unsigned int gcd(long long unsigned int a, long long unsigned int b)
{
    if (a < b)
    {
        long long unsigned int c = a;
        a = b;
        b = c;
    }
    while (b)
    {
        a %= b;
        long long unsigned int c = a;
        a = b;
        b = c;
    }
    return a;
}
long long unsigned int lcm(long long unsigned int a, long long unsigned int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    long long unsigned int x;
    cin >> x;
    if (x == 1)
    {
        cout << 1 << " " << 1;
        return 0;
    }
    if (x == 2)
    {
        cout << 2 << " " << 1;
        return 0;
    }
    long long unsigned int min = x + 1, m_a = x, m_b = x;

    for (long int i = sqrt(x); i >= 1; i--)
    {
        if (x % i == 0 && i != x / i && lcm(i, x / i) == x)
        {
            cout << i << " " << x / i;
            return 0;
        }
    }
    return 0;
}
