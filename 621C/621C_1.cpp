#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double f[100003];
    long long n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        long long l, r;
        cin >> l >> r;
        f[i] = 1 - (double)(r / p - (l - 1) / p) / (r - l + 1);
    }
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1 - f[i] * f[i % n + 1];
    cout << setprecision(7) << sum * 2000;
    return 0;
}