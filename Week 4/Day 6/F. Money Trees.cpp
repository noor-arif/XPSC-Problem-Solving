#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> h[i];

    vector<pair<int, int>> index;
    int l = 0, r = 0;
    while (r < n)
    {
        if (r == n - 1 or h[r] % h[r + 1] != 0)
        {
            index.push_back({l, r});
            l = r + 1;
        }
        r++;
    }

    int ans = 0;
    for (auto [l, r] : index)
    {
        int newl = l, newr = l;
        ll sum = 0;

        while (newr <= r)
        {
            sum += a[newr];
            if (sum <= k)
            {
                ans = max(ans, newr - newl + 1);
            }
            else
            {
                while (sum > k && newl <= newr)
                {
                    sum -= a[newl];
                    newl++;
                }
            }
            newr++;
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