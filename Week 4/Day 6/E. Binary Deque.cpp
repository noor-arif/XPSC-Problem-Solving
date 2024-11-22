#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0, l = 0, r = 0, ans = -1;
    while (r < n)
    {
        sum += a[r];
        if (sum == s)
            ans = max(ans, r - l + 1);
        else
        {
            while (sum > s && l <= r)
            {
                sum -= a[l];
                l++;
            }
        }
        r++;
    }
    if (ans == -1)
        cout << -1 << '\n';
    else
        cout << n - ans << '\n';
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