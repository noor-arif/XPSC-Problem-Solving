#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll g1 = 0, g2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            g1 = gcd(v[i], g1);
        else
            g2 = gcd(v[i], g2);
    }
    ll ans = 0;
    bool ok = true;
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % g1 == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        ans = g1;
    else
    {
        ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % g2 == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans = g2;
    }
    cout << ans << endl;
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