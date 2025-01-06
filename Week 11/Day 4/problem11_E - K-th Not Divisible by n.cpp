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
    ll x = k / (n - 1);
    if ((x + k) % n == 0)
        cout << x + k - 1 << endl;
    else
        cout << x + k << endl;
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
