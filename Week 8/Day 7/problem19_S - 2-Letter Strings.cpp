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
    vector<string> a(n);
    map<char, ll> f_occ, s_occ;
    map<string, ll> occ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f_occ[a[i][0]]++;
        s_occ[a[i][1]]++;
        occ[a[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = max((ll)0, f_occ[a[i][0]] - occ[a[i]]);
        ans += x;
        x = max((ll)0, s_occ[a[i][1]] - occ[a[i]]);
        ans += x;
        if (f_occ[a[i][0]] > 0)
            f_occ[a[i][0]]--;
        if (s_occ[a[i][1]] > 0)
            s_occ[a[i][1]]--;
        if (occ[a[i]] > 0)
            occ[a[i]]--;
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
