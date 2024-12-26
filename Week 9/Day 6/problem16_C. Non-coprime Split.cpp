#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
ll getPrime(ll n)
{
    if (n % 2 == 0)
        return 2;
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
void Solve()
{
    ll l, r;
    cin >> l >> r;
    if (r <= 3)
        cout << -1 << endl;
    else
    {
        if (l < r)
        {
            if (r % 2 != 0)
                r--;
            cout << 2 << " " << r - 2 << endl;
        }
        else // l==r
        {
            ll prime = getPrime(l);
            if (prime == l)
                cout << -1 << endl;
            else
                cout << prime << " " << l - prime << endl;
        }
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
