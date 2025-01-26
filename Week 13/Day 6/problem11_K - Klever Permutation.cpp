#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, k;
    cin >> n >> k;
    ll step = n / k, ext = n % k;
    ll pos = (ext + 1) / 2;
    ll neg = ext - pos;
    ll ans[n + 3], now = 1;
    for (ll i = 1; i <= k; i += 2)
    {
        ans[i] = now;
        now += (step + (pos > 0));
        pos--;
    }
    now--;
    for (ll i = 2; i <= k; i += 2)
    {
        now += (step + (neg > 0));
        ans[i] = now;
        neg--;
    }
    for (ll i = k + 1; i <= n; i++)
    {
        if (i % 2 == 1)
            ans[i] = ans[i - k] + 1;
        else
            ans[i] = ans[i - k] - 1;
    }
    for (ll i = 1; i <= n; i++)
        cout << ans[i] << " ";
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
