#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

vector<bool> vis;
vector<vector<int>> adj;
vector<ll> leep;

void dfs(int src)
{
    vis[src] = true;
    bool ok = true;
    for (auto child : adj[src])
    {
        if (!vis[child])
        {
            dfs(child);
            leep[src] += leep[child];
            ok = false;
        }
    }
    if(ok)
        leep[src] = 1;
    
}
void Solve()
{
    int n;
    cin >> n;

    vis.clear();
    leep.clear();
    adj.resize(n + 1, vector<int>());
    for (int i = 0; i <= n; i++)
        adj[i].clear();
    vis.resize(n + 1, false);
    leep.resize(n + 1, 0);

    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << leep[x] * leep[y] << endl;
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
