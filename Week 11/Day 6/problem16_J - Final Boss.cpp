#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    auto ok = [&](ll m)
    {
        ll damage = 0;
        for (int i = 0; i < n; i++)
        {
            ll atk = (m + c[i] - 1) / c[i];
            damage += (atk * a[i]);
            if (damage >= h)
                break;
        }
        return damage >= h;
    };
    ll l = 1, r = 1e12, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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
