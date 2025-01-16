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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> freq(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > n)
            continue;
        freq[a[i]]++;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll here = 0;
        for (ll x = 1; x * x <= i; x++)
        {
            if (i % x == 0)
            {
                here += freq[x];
                if (x * x != i)
                    here += freq[i / x];
            }
        }
        ans = max(ans, here);
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
