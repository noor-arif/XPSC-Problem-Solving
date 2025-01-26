#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool ok(vector<ll> a, ll n, ll d, ll c, ll k)
{
    if (k == 0)
        return a[0] * d >= c;
    ll sum = 0, gain = 0;
    if (k >= n)
    {
        for (ll i = 0; i < n; i++)
            sum += a[i];
    }
    else
    {
        for (ll i = 0; i < k; i++)
            sum += a[i];
    }
    ll times = d / k, rim = d % k;
    gain = times * sum;
    if (rim >= n)
    {
        for (ll i = 0; i < n; i++)
            gain += a[i];
    }
    else
    {
        for (ll i = 0; i < rim; i++)
            gain += a[i];
    }
    return gain >= c;
}
void Solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    ll total = 0;
    for (ll i = 0; i < min(n, d); i++)
        total += a[i];
    if (total >= c)
    {
        cout << "Infinity" << endl;
        return;
    }

    ll ans = -1, low = 0, high = 1e12, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (ok(a, n, d, c, mid + 1))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    if (ans == -1)
        cout << "Impossible" << endl;
    else
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
