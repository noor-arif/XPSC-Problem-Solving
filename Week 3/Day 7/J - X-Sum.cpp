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
        int n, m;
        cin >> n >> m;
        ll a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = a[i][j];
                int x = j - 1, y = j + 1;
                for (int k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += a[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += a[k][y];
                        y++;
                    }
                }
                x = j - 1, y = j + 1;
                for (int k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += a[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += a[k][y];
                        y++;
                    }
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}