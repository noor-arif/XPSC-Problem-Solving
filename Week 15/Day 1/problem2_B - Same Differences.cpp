#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        x -= i;
        mp[x]++;
    }
    ll ans = 0;
    for (auto [_, y] : mp)
    {
        ll val = 1LL * (y * (y - 1)) / 2;
        ans += val;
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
