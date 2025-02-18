#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const int N = 4e3 + 5;
vector<int> adj[N];
vector<pair<int, int>> col;

void dfs(int curr, int par)
{
    for (auto i : adj[curr])
    {
        if (i != par)
            dfs(i, curr);
    }
    if (par != -1)
    {
        col[par].first += col[curr].first;
        col[par].second += col[curr].second;
    }
}
void Solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        adj[i].clear();
    col.clear();

    vector<int> a(n + 1);
    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        adj[a[i]].push_back(i);
    }

    string s;
    cin >> s;
    col.resize(n + 1);
    for (int i = 1; i <= n; i++)
        col[i] = {0, 0};

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            col[i + 1].first++;
        else
            col[i + 1].second++;
    }
    dfs(1, -1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (col[i].first == col[i].second)
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
