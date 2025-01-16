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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    sort(begin(v), end(v));

    ll x = 0, mx = v[n - 1];
    for (ll i = 0; i < n; i++)
        x = gcd(x, mx - v[i]);

    ll operation = 1;
    for (ll i = 0; i < n; i++)
        operation += ((mx - v[i]) / x);

    ll last = mx - x;
    for (ll i = n - 2; i >= 0; i--)
    {
        if (last != v[i])
            break;
        operation++;
        last -= x;
    }
    
    cout << operation << endl;
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
