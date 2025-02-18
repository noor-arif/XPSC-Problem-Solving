#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const ll N = 2 * 1e5 + 100;
vector<ll> g[N], vis(N, 0), subTree(N, 0), vis1(N, 0);
ll ans = 0;

void dfs(ll v)
{
    vis[v] = 1;
    subTree[v] += 1;
    for (auto x : g[v])
    {
        if (!vis[x])
        {
            dfs(x);
            subTree[v] += subTree[x];
        }
    }
}
void dfs1(ll v)
{
    vis1[v] = 1;
    for (auto x : g[v])
    {
        if (!vis1[x])
        {
            dfs1(x);
            if (subTree[x] % 2 == 0)
            {
                ans++;
                subTree[v] -= subTree[x];
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    for (ll i = 1; i <= n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if (n % 2)
    {
        cout << -1 << endl;
        return 0;
    }
    dfs(1);
    dfs1(1);
    cout << ans << endl;
    return 0;
}