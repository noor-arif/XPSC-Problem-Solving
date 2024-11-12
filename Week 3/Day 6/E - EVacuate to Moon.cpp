#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> a(n), b(m), bh(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < m; i++)
        {
            bh[i] = b[i] * h;
        }
        sort(a.rbegin(), a.rend());
        sort(bh.rbegin(), bh.rend());
        ll ans = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            ans += min(a[i], bh[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}