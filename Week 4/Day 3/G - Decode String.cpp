#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n and s[i + 2] == '0' and (i + 3 >= n or s[i + 3] != '0'))
        {
            char ch = 96 + ((s[i] - '0') * 10) + (s[i + 1] - '0');
            ans.push_back(ch);
            i += 2;
        }
        else
        {
            char ch = 96 + s[i] - '0';
            ans.push_back(ch);
        }
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