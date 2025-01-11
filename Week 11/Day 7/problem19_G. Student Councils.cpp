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
    ll k, n;
    cin >> k >> n;
    ll sum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    auto ok = [&](ll council)
    {
        ll slot = council * k;
        for (auto x : v)
            slot -= min(x, council);
        return slot <= 0;
    };
    ll l = 0, r = (sum / k) + 10, mid;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l << endl;
    return 0;
}