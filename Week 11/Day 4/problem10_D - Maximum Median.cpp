#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

ll n, k;
vector<ll> a;
bool can(ll v)
{
    ll need = 0;
    for (int i = n / 2; i < n; i++)
    {
        if (v > a[i])
            need += abs(a[i] - v);
        if (need > k)
            return false;
    }
    return need <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> k;
    a.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll l = 1, h = 1e18, ans = 0, mid = 0;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (can(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
            h = mid - 1;
    }
    cout << ans << endl;
    return 0;
}