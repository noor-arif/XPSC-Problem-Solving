#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int l = 1, r = n * n;
    while (l <= r)
    {
        v.push_back(l++);
        if (r >= l)
            v.push_back(r--);
    }
    int c = 0, ans[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= n; j++)
                ans[i][j] = v[c++];
        }
        else
        {
            for (int j = n; j >= 1; j--)
                ans[i][j] = v[c++];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << ans[i][j] << " ";
        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}