#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

vector<vector<int>> g;
vector<int> vis;
map<pair<int, int>, int> mp;

void dfs(int src, int w)
{
    vis[src] = 1;
    for (int child : g[src])
    {
        if (!vis[child])
        {
            mp[{src, child}] = w;
            mp[{child, src}] = w;
            if (w == 2)
                w = 3;
            else
                w = 2;
            dfs(child, w);
        }
    }
}
void Solve()
{
    int n;
    cin >> n;

    g.assign(n + 1, vector<int>());
    vis.assign(n + 1, 0);
    mp.clear();

    vector<pair<int, int>> edge(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        edge[i] = {u, v};
    }

    for (int i = 1; i <= n; i++)
    {
        if (g[i].size() > 2)
        {
            cout << -1 << endl;
            return;
        }
    }

    dfs(1, 2);
    
    for (int i = 0; i < n - 1; i++)
    {
        cout << mp[edge[i]] << " ";
    }
    cout << endl;
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
