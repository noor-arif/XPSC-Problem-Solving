#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1), pref(n + 1), mx(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
        mx[i] = max(mx[i - 1], a[i]);
    }
    while (q--)
    {
        ll x, ans = 0;
        cin >> x;
        int k = upper_bound(mx.begin(), mx.end(), x) - mx.begin() - 1;
        if (k >= 0)
            ans = pref[k];
        cout << ans << " ";
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
