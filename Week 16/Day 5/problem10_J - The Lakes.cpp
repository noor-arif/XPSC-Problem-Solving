#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const int N = 1e3 + 5;
int n, m;
int grid[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
ll depth;

bool valid(int i, int j)
{
    if (i < 0 or i >= n or j < 0 or j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    depth += grid[si][sj];
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) and vis[ci][cj] == false and grid[ci][cj] != 0)
        {
            dfs(ci, cj);
        }
    }
}
void Solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }
    memset(vis, false, sizeof(vis));
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == false and grid[i][j] != 0)
            {
                depth = 0;
                dfs(i, j);
                ans = max(ans, depth);
            }
        }
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
