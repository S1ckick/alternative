#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
typedef long long ll;

double dp[1000];
double x[1000], y[1000], p[1000], t[1000];

ll sqr(ll b)
{
    return b * b;
}

bool compare(int a, int b) //функция для сортировки
{
    return (t[a] < t[b]);
}

int main()
{
    int n;
    cin >> n;
    vector<int> perm;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> t[i] >> p[i];
        perm.push_back(i);
    }
    sort(perm.begin(), perm.end(), compare); //сортируем по времени.
    double ans = 0;
    for (int ii = 0; ii < n; ii++)
    {
        int i = perm[ii];
        for (int jj = 0; jj < ii; jj++)
        {
            int j = perm[jj];
            if (sqr(t[i] - t[j]) >=
                sqr(x[i] - x[j]) +
                    sqr(y[i] - y[j])) //проверяем условие связанное со временем в задаче.
            {
                dp[i] = max(dp[i], dp[j]); //записываем максимальное возможное мат ожидание.
            }
        }
        dp[i] += p[i];
        ans = max(ans, dp[i]);
    }
    cout << setprecision(22) << ans << endl;
    return 0;
}