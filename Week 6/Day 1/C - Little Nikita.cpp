#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
        cout << "NO\n";
    else if (n == m)
        cout << "YES\n";
    else
    {
        int x = n - m;
        if (x % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
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