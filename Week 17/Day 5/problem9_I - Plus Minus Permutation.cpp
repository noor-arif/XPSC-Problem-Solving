#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll xn = n / x, xy = n / y, lc = lcm(x, y);
    ll comon = n / lc;
    xn -= comon, xy -= comon;
    ll tn = (n * (n + 1)) / 2;
    ll py = (xy * (xy + 1)) / 2;
    n = n - xn;
    ll sub = (n * (n + 1)) / 2;
    ll px = tn - sub;
    ll ans = px - py;
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
