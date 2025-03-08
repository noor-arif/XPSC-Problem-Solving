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
    int ans = n;
    if (n % 2 == 0)
    {
        vector<int> v[2] = {vector<int>(26), vector<int>(26)};
        for (int i = 0; i < n; i++)
        {
            v[i % 2][s[i] - 'a']++;
        }
        for (int i = 0; i < 2; i++)
        {
            int mx = 0;
            for (int j = 0; j < 26; j++)
            {
                mx = max(mx, v[i][j]);
            }
            ans -= mx;
        }
        cout << ans << endl;
    }
    else
    {
        vector<int> pref[2] = {vector<int>(26), vector<int>(26)};
        vector<int> suf[2] = {vector<int>(26), vector<int>(26)};
        for (int i = n - 1; i >= 0; i--)
        {
            suf[i % 2][s[i] - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            suf[i % 2][s[i] - 'a']--;
            int res = n;
            for (int k = 0; k < 2; k++)
            {
                int mx = 0;
                for (int j = 0; j < 26; j++)
                {
                    mx = max(mx, pref[k][j] + suf[1 - k][j]);
                }
                res -= mx;
            }
            ans = min(ans, res);
            pref[i % 2][s[i] - 'a']++;
        }
        cout << ans << endl;
    }
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
