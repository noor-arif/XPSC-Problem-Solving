#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mp = 0, bug = 0, l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] == s[r])
            mp += 2; // canculating 1 in the matching pair of palindrom
        else
            bug++; // canculating 1 in the unmatching pair where needed 1 for make palindrom
        l++, r--;
    }
    string ans = "";
    for (int i = 0; i <= n; i++)
    {
        int total = i;
        total -= bug; // use 1 in unmatching pelindrom
        if (total < 0)
        {
            ans.push_back('0');
            continue;
        }
        total = max((total % 2), total - mp); // use remaining 1 in pelindrom pair
        total = max(0, total - (n % 2));      // use 1 in middle poin if n is odd
        if (total == 0)
            ans.push_back('1');
        else
            ans.push_back('0');
    }
    cout << ans << '\n';
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