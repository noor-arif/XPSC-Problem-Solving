#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, root;
    cin >> n;
    vector<int> g[n + 1], bad(n + 1), a(n + 1), ans;
    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;
        if (p != -1)
            g[p].push_back(i);
        else
            root = i;
        if (c == 1)
        {
            bad[p]++;
            a[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == root)
            continue;
        if (g[i].size() == bad[i] and a[i] == 1)
            ans.push_back(i);
    }

    if (ans.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto val : ans)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}