#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const int maxN = 3e5 + 5;
vector<int> g[maxN], op(maxN);
string s;

void dfs(int u)
{
    if (g[u][0] != 0)
    {
        int v = g[u][0];
        if (s[u - 1] != 'L')
            op[v] = op[u] + 1;
        else
            op[v] = op[u];
        dfs(v);
    }
    if (g[u][1] != 0)
    {
        int v = g[u][1];
        if (s[u - 1] != 'R')
            op[v] = op[u] + 1;
        else
            op[v] = op[u];
        dfs(v);
    }
}

void Solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        g[i].clear();
        op[i] = 0;
    }
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        g[i].push_back(l);
        g[i].push_back(r);
    }

    dfs(1);
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (g[i][0] == 0 and g[i][1] == 0)
            ans = min(ans, op[i]);
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
