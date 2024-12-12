#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), bit(30, 0);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < 30; i++)
    {
        ll num = (1LL << i);
        for (ll j = 0; j < n; j++)
        {
            if ((a[j] & num) != 0)
                bit[i]++;
        }
    }
    for (ll k = 1; k <= n; k++)
    {
        bool ok = false;
        for (ll i = 0; i < 30; i++)
        {
            if ((bit[i] % k) != 0)
            {
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << k << " ";
    }
    cout << '\n';
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