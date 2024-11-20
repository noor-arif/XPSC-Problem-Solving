#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> cnt;
    ll ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        cnt[v[r]]++;
        if (cnt.size() <= k)
            ans += (r - l + 1);
        else
        {
            while (cnt.size() > k && l <= r)
            {
                cnt[v[l]]--;
                if (cnt[v[l]] == 0)
                    cnt.erase(v[l]);
                l++;
            }
            if (cnt.size() <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}