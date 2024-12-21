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
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n * 4; i++)
    {
        if (s[i] != '?')
            mp[s[i]]++;
    }
    int ans = 0;
    for (auto [x, y] : mp)
        ans += min(y, n);
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
