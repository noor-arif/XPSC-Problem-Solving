#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] += (i + 1);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + v[i] > c)
            break;
        sum += v[i];
        ans++;
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