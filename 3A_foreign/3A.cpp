#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long int n;
        cin >> n;
        if (n == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "5";
            for (long int j = 0; j < n - 1; j++)
            {
                cout << "7";
            }
            cout << endl;
        }
    }

    return 0;
}
