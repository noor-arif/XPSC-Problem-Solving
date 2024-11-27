#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[v[i]]++;

    int mx_freq = 0;
    for (auto i : mp)
        mx_freq = max(mx_freq, i.second);

    int ans = 0;
    while (mx_freq < n)
    {
        int r = n - mx_freq;
        int add = mx_freq;
        ans++;
        ans += min(add, r);
        mx_freq += min(add, r);
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}