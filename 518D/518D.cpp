#include <iostream>
#include <iomanip>
using namespace std;
long double dp[2500][2500];
int n, t;
long double ans, p;
int main()
{
    cin >> n >> p >> t;
    dp[0][0] = 1;
    for (int i = 0; i < t; i++)
    {
        int max = n >= i ? n : i;
        for (int j = 0; j <= max; j++)
            if (j != n)
            {
                dp[i + 1][j] += dp[i][j] * (1.0 - p);
                dp[i + 1][j + 1] += dp[i][j] * p;
            }
            else
                dp[i + 1][j] += dp[i][j];
    }
    for (int j = 0; j <= n; j++)
        ans = (ans + 1.0 * j * dp[t][j]);
    cout << setprecision(11) << fixed << ans;
    return 0;
}