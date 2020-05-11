#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long n, p;
    cin >> n >> p;
    long(*arr)[2] = new long[n][2];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> arr[i][j];
    long double mul1, mul2, answer = 0;
    for (int i = 0; i < n; ++i)
    {
        long all1 = arr[i][1] - arr[i][0] + 1;
        mul1 = int(arr[i][1] / p) - int((arr[i][0] - 1) / p);
        long all2 = arr[(i + 1) % n][1] - arr[(i + 1) % n][0] + 1;
        mul2 = int(arr[(i + 1) % n][1] / p) - int((arr[(i + 1) % n][0] - 1) / p);
        long double q = mul1 / all1, w = mul2 / all2;
        answer = answer + (q + w - q * w);
    }
    cout << fixed << setprecision(6) << answer * 2000;
    return 0;
}
