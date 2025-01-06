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
    for (int i = 1; i <= log2(n) + 1; i++)
    {
        ll x = pow(2, i);
        ll y = (n + (x / 2)) / x;
        if (k <= y)
        {
            ll ans = (x / 2) + (k - 1) * x;
            cout << ans << endl;
            return;
        }
        else
            k -= y;
    }
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
