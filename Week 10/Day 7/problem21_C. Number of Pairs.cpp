#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int idx1 = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
        int idx2 = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
        ans += idx2 - idx1;
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
