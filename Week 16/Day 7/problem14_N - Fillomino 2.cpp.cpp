#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

int n;
vector<vector<int>> grid, vis;
vector<pair<int, int>> d = {{0, -1}, {1, 0}};

bool valid(int i, int j)
{
    return (i>=0 and i<n and j>=0 and j<n);
}
int val;
void dfs(int si, int sj)
{
    vis[si][sj] = 1;
    for(int i=0; i<2; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) and grid[ci][cj]==-1 and val>0)
        {
            grid[ci][cj] = grid[si][sj];
            val--;
            dfs(ci, cj);
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    grid.assign(n, vector<int>(n, -1));
    vis.assign(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i][i];
    }

    for (int i = 0; i < n; i++)
    {
        val = grid[i][i]-1;
        dfs(i, i);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}