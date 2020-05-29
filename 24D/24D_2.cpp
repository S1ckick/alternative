#include <iostream>
#include <iomanip>
using namespace std;
const int N = 1001;

double dp[N][N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = n - 2; i >= 0; i--)
        for (int t = 0; t < 100; t++)
            for (int j = 0; j < m; j++)
                if (m == 1)
                    dp[i][j] = 1 + (dp[i][j] + dp[i + 1][j]) / 2;
                else if (j == 0)
                    dp[i][j] = 1 + (dp[i][j] + dp[i + 1][j] + dp[i][j + 1]) / 3;
                else if (j == m - 1)
                    dp[i][j] = 1 + (dp[i][j] + dp[i + 1][j] + dp[i][j - 1]) / 3;
                else
                    dp[i][j] = 1 + (dp[i][j] + dp[i + 1][j] + dp[i][j - 1] + dp[i][j + 1]) / 4;

    int a, b;
    cin >> a >> b;
    a--;
    b--; // 0-индексация
    cout << fixed << setprecision(12) << dp[a][b] << endl;
    return 0;
}
