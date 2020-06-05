#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int NOD(int A, int B)
{
    while (A != 0 && B != 0)
        if (A > B)
            A %= B;
        else
            B %= A;
    return A + B;
}

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 1;
        return 0;
    }
    if (b == 1)
    {
        cout << a;
        return 0;
    }
    if (a == 1)
    {
        cout << b;
        return 0;
    }
    long long int ans = 0;
    while (a != 0 && b != 0)
        if (a > b)
        {
            ans += a / b;
            a %= b;
        }
        else
        {
            ans += b / a;
            b %= a;
        }

    cout << ans;
    //    cout << fixed << setprecision(7) << wall[l][c];
    return 0;
}
