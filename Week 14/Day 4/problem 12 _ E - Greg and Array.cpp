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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<pair<pair<int, int>, int>> v(m + 1);
    for (int i = 1; i <= m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        v[i] = {{l, r}, d};
    }

    vector<int> dm(m + 2, 0);
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        dm[x]++;
        dm[y + 1]--;
    }
    for (int i = 1; i < m + 2; i++)
        dm[i] = dm[i - 1] + dm[i];

    vector<ll> dn(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        int l = v[i].first.first, r = v[i].first.second, d = v[i].second;
        ll val = (1LL * d * dm[i]);
        dn[l] += val;
        dn[r + 1] -= val;
    }
    for (int i = 1; i < n + 2; i++)
        dn[i] = dn[i - 1] + dn[i];

    for (int i = 1; i <= n; i++)
        cout << (1LL * (dn[i] + a[i])) << " ";
    cout << endl;

    return 0;
}