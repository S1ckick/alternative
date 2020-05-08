#include <iostream> //cin & cout
#include <cmath> //pow
using namespace std;
int main()
{
    double m, n;
    cin >> m >> n;
    double ans = 0;
    for (double t = 1; t <= m; t++)
        ans += pow((t - 1) / m, n);
    cout << m - ans;
    return 0;
}