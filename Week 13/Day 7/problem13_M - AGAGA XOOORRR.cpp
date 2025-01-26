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
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        x = x xor v[i];
    }
    if (x == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        ll xm = 0;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            xm = xm xor v[i];
            if (xm == x)
            {
                count++;
                xm = 0;
            }
        }
        if (count >= 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
