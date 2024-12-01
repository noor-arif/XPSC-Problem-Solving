#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0, r = 0;
    ll mx = -1, sum = 0;
    while (r < n)
    {
        sum += v[r];
        mx = max(mx, v[r]);
        if (sum - mx == mx)
            ans++;
        r++;
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
