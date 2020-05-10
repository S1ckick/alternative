#include <iostream>
using namespace std;
int main()
{
    int perm[3001];
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> perm[i];
    // count inversions
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (perm[i] > perm[j])
                ans++;
    cout << (ans % 2 == 0 ? 2 * ans : 2 * ans - 1);

    return 0;
}