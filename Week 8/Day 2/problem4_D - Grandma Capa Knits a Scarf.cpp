#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < n; i++)
        st.insert(s[i]);
    vector<int> ans(26, INT_MAX);
    for (char ch : st)
    {
        int l = 0, r = n - 1, cnt = 0;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++, r--;
            }
            else
            {
                if (s[l] == ch)
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == ch)
                {
                    r--;
                    cnt++;
                }
                else
                {
                    cnt = -1;
                    break;
                }
            }
        }
        if (cnt != -1)
            ans[ch - 'a'] = cnt;
    }
    sort(ans.begin(), ans.end());
    if (ans[0] == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans[0] << '\n';
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