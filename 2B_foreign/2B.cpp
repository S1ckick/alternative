#include <iostream>
#include <cmath>

using namespace std;

void fib(int n)
{
    int f0 = 0, f1 = 1;
    int f = 0;

    while ((f0 + f1) < n)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }

    cout << 0 << " " << f0 << " " << f1;
}

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << " "
             << " " << 0 << " " << 0;
    }
    else if (n == 1)
    {
        cout << 0 << " "
             << " " << 0 << " " << 1;
    }
    else if (n == 2)
    {
        cout << 0 << " "
             << " " << 1 << " " << 1;
    }
    else if (n == 3)
    {
        cout << 2 << " "
             << " " << 1 << " " << 0;
    }
    else
    {
        fib(n);
    }

    return 0;
}
