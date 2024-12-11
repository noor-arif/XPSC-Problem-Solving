#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m;
    cin >> n >> m;
    ll l = max(0, n - m), r = n + m;
    ll temp = 0;
    for (int i = 31; i >= 0; i--)
    {
        ll x = ((1 << i) & l) ? 1 : 0;
        ll y = ((1 << i) & r) ? 1 : 0;
        if (x ^ y)
        {
            temp = (1 << i);
            temp |= temp - 1;
            break;
        }
    }
    ll ans = l | temp;
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