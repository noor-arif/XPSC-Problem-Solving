#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = b;
    for (int i = 0; i < n; i++)
    {
        ans += min(v[i], a - 1);
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}