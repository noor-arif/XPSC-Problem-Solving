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
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 1;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (a[i] != 1)
            ans = max(ans, mp[a[i]]);
    }
    if (n == 1)
        cout << 1 << endl;
    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    mp[j]++;
                    ans = max(ans, mp[j]);
                    if (a[i] / j != j)
                    {
                        mp[a[i] / j]++;
                        ans = max(ans, mp[a[i] / j]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}