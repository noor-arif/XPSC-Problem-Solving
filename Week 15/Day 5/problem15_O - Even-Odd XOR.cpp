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
    vector<ll> ans(n, 0);
    if (n & 1)
    {
        for (ll i = 1, j = 1; i < n; i += 2, j++)
        {
            ans[i] = j;
        }
        for (ll i = 2, j = 1; i < n; i += 2, j++)
        {
            ans[i] = j;
        }
    }
    else
    {
        for (ll i = 0, j = 1; i < n; i += 2, j++)
        {
            ans[i] = j;
        }
        for (ll i = 1, j = 1; i < n; i += 2, j++)
        {
            ans[i] = j;
        }
    }
    if (((n + 1) / 2) & 1)
    {
        for (ll i = 0; i < n - 2; i += 2)
        {
            ans[i] |= (1ll << 30);
        }
        for (ll i = 2; i < n; i += 2)
        {
            ans[i] |= (1ll << 29);
        }
    }
    else
    {
        for (ll i = 0; i < n; i += 2)
        {
            ans[i] |= (1ll << 30);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
        ;
    }
    cout << endl;
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
