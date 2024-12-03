#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int l = -1, cnt = 0, mx = 0, final_l = -1;
    for (auto x : mp)
    {
        if (x.second >= k)
        {
            if (cnt == 0)
            {
                l = x.first;
                cnt++;
            }
            else
            {
                if (l + cnt == x.first)
                    cnt++;
                else
                {
                    if (cnt > mx)
                    {
                        mx = cnt;
                        final_l = l;
                    }
                    cnt = 1;
                    l = x.first;
                }
            }
        }
        else
        {
            if (cnt > mx)
            {
                mx = cnt;
                final_l = l;
            }
        }
    }
    if (cnt > mx)
    {
        mx = cnt;
        final_l = l;
    }
    if (final_l == -1)
        cout << -1 << '\n';
    else
        cout << final_l << " " << final_l + mx - 1 << '\n';
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