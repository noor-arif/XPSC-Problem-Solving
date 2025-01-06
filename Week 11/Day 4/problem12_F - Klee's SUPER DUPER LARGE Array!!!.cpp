#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
ll sum(ll l, ll r, ll k)
{
    return (r * (r + 1) / 2) - ((l * (l - 1)) / 2) + ((r - l + 1) * k);
}
void Solve()
{
    ll n, k;
    cin >> n >> k;
    ll l = 0, r = n - 1, ans = LONG_LONG_MAX;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll x = sum(0, mid, k);
        ll y = sum(mid + 1, n - 1, k);
        if (x == y)
        {
            cout << 0 << endl;
            return;
        }
        if (x < y)
        {
            l = mid + 1;
            ans = min(ans, abs(x - y));
        }
        else
        {
            r = mid - 1;
            ans = min(ans, abs(x - y));
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
