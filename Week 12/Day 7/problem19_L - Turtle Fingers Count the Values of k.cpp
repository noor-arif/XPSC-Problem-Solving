#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll a, b, l;
    cin >> a >> b >> l;
    ll x = 0;
    set<ll> k;
    while (true)
    {
        if ((l % int(pow(a, x))) != 0)
            break;
        ll curr = l / int(pow(a, x));
        k.insert(curr);
        while (curr % b == 0)
        {
            curr /= b;
            k.insert(curr);
        }
        x++;
    }
    cout << k.size() << endl;
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
