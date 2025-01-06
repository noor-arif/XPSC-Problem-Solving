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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 0;
    map<tuple<ll, ll, ll>, ll> mp;
    for (int i = 0; i < n - 2; i++)
    {
        ans += (mp[{v[i], v[i + 1], -1}] + mp[{v[i], -1, v[i + 2]}] + mp[{-1, v[i + 1], v[i + 2]}] - 3 * mp[{v[i], v[i + 1], v[i + 2]}]);
        mp[{v[i], v[i + 1], -1}]++;
        mp[{v[i], -1, v[i + 2]}]++;
        mp[{-1, v[i + 1], v[i + 2]}]++;
        mp[{v[i], v[i + 1], v[i + 2]}]++;
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
