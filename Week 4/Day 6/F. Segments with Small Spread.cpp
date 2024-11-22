#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ml;
    while (r < n)
    {
        ml.insert(a[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k)
                    break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}