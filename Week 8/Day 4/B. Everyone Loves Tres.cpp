#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    if (n == 1 or n == 3)
        cout << -1 << '\n';
    else if (n % 2 == 0)
    {
        for (int i = 1; i <= n - 2; i++)
            cout << 3;
        cout << 66 << '\n';
    }
    else
    {
        for (int i = 1; i <= n - 5; i++)
            cout << 3;
        cout << 36366 << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}