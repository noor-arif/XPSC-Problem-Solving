#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;

    vector<int> d;
    int l = -1, r = 1e9 + 5;

    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;

        if (a == 1)
            l = max(l, x);
        else if (a == 2)
            r = min(r, x);
        else
            d.push_back(x);
    }

    if (l > r)
    {
        cout << 0 << endl;
        return;
    }

    int ans = r - l + 1, extra = 0, m = d.size();
    for (int i = 0; i < m; i++)
    {
        if (d[i] >= l and d[i] <= r)
        {
            extra++;
        }
    }

    cout << ans - extra << endl;
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
