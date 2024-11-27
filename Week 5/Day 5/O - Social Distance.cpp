#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0, pos = 0;
    if (s[0] == '0')
        ans++;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i - pos <= k)
                ans--;
            pos = i;
        }
        else
        {
            if (i - pos > k)
            {
                ans++;
                pos = i;
            }
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