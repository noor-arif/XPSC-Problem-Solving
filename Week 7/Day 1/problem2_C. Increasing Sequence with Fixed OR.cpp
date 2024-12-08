#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;
    cin >> n;
    deque<ll> ans;
    for (int k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            ll value = n - (1LL << k);
            if (value > 0)
                ans.push_front(value);
        }
    }
    ans.push_back(n);
    cout << ans.size() << '\n';
    for (auto val : ans)
        cout << val << " ";
    cout << '\n';
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