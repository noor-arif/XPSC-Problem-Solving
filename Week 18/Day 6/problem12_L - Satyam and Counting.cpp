#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1, {-1, -1});
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y == 0)
            v[x].first = y;
        else
            v[x].second = y;
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (v[i].first != -1 and v[i].second != -1)
            ans++;
    }
    ans = ans * (n - 2);
    for (int i = 1; i <= n - 1; i++)
    {
        if (v[i].first == 0 and v[i - 1].second == 1 and v[i + 1].second == 1)
            ans++;
        if (v[i].second == 1 and v[i - 1].first == 0 and v[i + 1].first == 0)
            ans++;
    }
    cout << ans << endl;
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
