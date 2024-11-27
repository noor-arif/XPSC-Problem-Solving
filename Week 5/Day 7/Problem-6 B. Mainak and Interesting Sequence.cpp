#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m;
    cin >> n >> m;
    if (n > m || (n % 2 == 0 && m % 2 == 1))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n - 2; i++)
            cout << 1 << " ";
        cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << '\n';
    }
    else
    {
        for (int i = 1; i <= n - 1; i++)
            cout << 1 << " ";
        cout << m - n + 1 << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}