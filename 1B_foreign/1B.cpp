#include <iostream>
#include <cmath>
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = abs(a * d - b * c);
    int gc;
    if (a * d > b * c)
    {
        gc = gcd(res, a * d);
        cout << res / gc << "/" << a * d / gc;
    }
    else
    {
        gc = gcd(res, b * c);
        cout << res / gc << "/" << b * c / gc;
    }

    return 0;
}
