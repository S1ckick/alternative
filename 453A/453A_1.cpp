#include <iostream> //cin & cout
#include <cmath> //pow
using namespace std;
int main()
{
    double m, n;
    cin >> m >> n;
    double ans = 0;
    for (double i = m; i; i--)
        ans += i * (pow(i / m, n) - pow((i - 1) / m, n));
    cout << ans;
    return 0;
}