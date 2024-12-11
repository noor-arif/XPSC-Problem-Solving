#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;
    cin >> n;
    ll ans = 1;
    while (ans * 2 <= n)
    {
        ans *= 2;
    }
    cout << ans - 1 << '\n';
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