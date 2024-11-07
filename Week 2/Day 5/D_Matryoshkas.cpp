#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int last = 0, cnt = 0, ans = 0;
        for (auto it : mp)
        {
            if (it.first == last + 1)
            {
                if (cnt < it.second)
                    ans += (it.second - cnt);
            }
            else if (it.first != last + 1)
            {
                ans += it.second;
            }
            last = it.first;
            cnt = it.second;
        }

        cout << ans << '\n';
    }
    return 0;
}