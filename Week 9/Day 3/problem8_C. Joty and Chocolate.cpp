#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, a, b, p, q, ans;
    cin >> n >> a >> b >> p >> q;
    ll l = lcm(a, b);
    if (p >= q)
        ans = p * (n / a) + q * ((n / b) - (n / l));
    else
        ans = p * ((n / a) - (n / l)) + q * (n / b);
    cout << ans << endl;
    return 0;
}