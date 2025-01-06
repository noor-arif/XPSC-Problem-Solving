#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll l = 1;
    ll r = 1e10;
    while (l < r - 1)
    {
        ll total = 0;
        ll mid = l + (r - 1) / 2;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < mid)
                total += (mid - a[i]);
        }
        if (total > x)
        {
            r = mid;
        }
        else
            l = mid;
    }
    cout << l << endl;
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
