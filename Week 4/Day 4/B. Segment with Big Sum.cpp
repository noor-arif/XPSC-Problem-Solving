#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;
    while (l < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
            sum -= v[r];
        }
        else
        {
            if (r < n - 1)
                r++;
            else
            {
                sum -= v[l];
                l++;
                sum -= v[r];
            }
        }
    }
    if (ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}