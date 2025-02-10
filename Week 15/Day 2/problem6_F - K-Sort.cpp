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
    ll cur_mx = 0, total = 0, depth = 0;
    for (ll i = 0; i < n; i++)
    {
        cur_mx = max(cur_mx, v[i]);
        ll dis = cur_mx - v[i];
        total += dis;
        depth = max(depth, dis);
    }
    cout << total + depth << endl;
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
