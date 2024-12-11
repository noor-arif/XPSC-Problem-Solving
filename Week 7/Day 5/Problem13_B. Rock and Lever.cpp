#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<ll> v(n), cnt(33);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        ll temp = v[i];
        int c = 0;
        while (temp > 0)
        {
            temp /= 2;
            c++;
        }
        cnt[c]++;
    }
    ll ans = 0;
    for (int i = 0; i <= 32; i++)
    {
        if (cnt[i] >= 2)
            ans += ((cnt[i] * (cnt[i] - 1)) / 2);
    }
    cout << ans << '\n';
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