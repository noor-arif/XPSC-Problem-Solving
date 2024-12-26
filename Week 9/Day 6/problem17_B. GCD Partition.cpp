#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<ll> prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            prefix[i] = v[i];
        else
            prefix[i] = prefix[i - 1] + v[i];
    }
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, gcd(prefix[i - 1], prefix[n - 1] - prefix[i - 1]));
    }
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
