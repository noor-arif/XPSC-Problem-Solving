#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    auto ok = [&](int k)
    {
        multiset<int> s;
        for (auto i : v)
            s.insert(i);
        for (int i = 1; i <= k; i++)
        {
            if (s.empty())
                return false;
            int req = k - i + 1;
            auto it = s.upper_bound(req);
            if (it == s.begin())
                return false;
            it--;
            s.erase(it);

            if (!s.empty())
            {
                it = s.begin();
                int val = *it;
                val += req;
                s.erase(it);
                s.insert(val);
            }
        }
        return true;
    };
    int l = 0, r = n, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
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
