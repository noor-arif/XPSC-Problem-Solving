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
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < (k + 1) / 2; i++)
    {
        unordered_map<char, int> mp;
        for (int j = i; j < n; j += k)
            mp[s[j]]++;
        if (2 * i + 1 != k)
        {
            for (int j = n - 1 - i; j >= 0; j -= k)
                mp[s[j]]++;
        }
        int sum = 0, mx = 0;
        for (auto [x, y] : mp)
        {
            sum += y;
            mx = max(mx, y);
        }
        ans += (sum - mx);
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
