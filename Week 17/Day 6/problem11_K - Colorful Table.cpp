#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    map<int, int> mp;
    for (int i = 1; i <= k; i++)
        mp[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());
    int mx = -1, mn = 1e6;
    for (int i = n - 1; i >= 0; i--)
    {
        mx = max(a[i].second, mx);
        mn = min(a[i].second, mn);
        int l = 2 * (mx - mn + 1);
        mp[a[i].first] = max(mp[a[i].first], l);
    }
    for (int i = 1; i <= k; i++)
        cout << mp[i] << " ";
    cout << endl;
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
