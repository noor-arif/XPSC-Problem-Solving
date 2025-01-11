#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;
    cin >> n;
    ll l = 1, r = 2e9, mid, midCr;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        midCr = (mid * (mid - 1)) / 2;
        if (midCr <= n)
            l = mid;
        else
            r = mid;
    }
    ll lCr = (l * (l - 1)) / 2;
    ll ball = n - lCr;
    ll ans = l + ball;
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
