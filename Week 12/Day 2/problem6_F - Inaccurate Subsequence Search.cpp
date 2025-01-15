#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    map<int, int> mp, mp2;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        mp2[a[i]]++;
        if (mp[a[i]] && (mp2[a[i]] <= mp[a[i]]))
            cnt++;
    }
    ll ans = 0;
    if (cnt >= k)
        ans++;
    for (int i = 1, j = m; j < n; i++, j++)
    {
        mp2[a[i - 1]]--;
        if (mp[a[i - 1]] && mp2[a[i - 1]] < mp[a[i - 1]])
            cnt--;
        mp2[a[j]]++;
        if (mp[a[j]] && mp2[a[j]] <= mp[a[j]])
            cnt++;
        if (cnt >= k)
            ans++;
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
