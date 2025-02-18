#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const int N = 1e5 + 5;
vector<int> v[N], group(2, 0);
vector<bool> vis(N, false);

void dfs(int src, int s)
{
    vis[src] = true;
    group[s]++;
    for (auto child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child, 1 - s);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1, 0);
    ll ans = 1LL * group[0] * group[1] - (n - 1);
    cout << ans << endl;
    return 0;
}