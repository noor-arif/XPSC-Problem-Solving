#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

int n, m, ans;
vector<vector<int>> g;
vector<int> vis, cat;

void dfs(int src, int c)
{
    vis[src] = 1;
    if (c > m)
        return;
    bool leef = true;
    for (auto child : g[src])
    {
        if (!vis[child])
        {
            dfs(child, c * cat[child] + cat[child]);
            leef = false;
        }
    }
    if (leef)
        ans++;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    vis.resize(n + 1, 0);
    g.resize(n + 1);
    cat.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> cat[i];
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, cat[1]);

    cout << ans << endl;
    return 0;
}