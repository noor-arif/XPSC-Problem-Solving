#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename Tl>
using pbds = tree<Tl, null_type, less<Tl>, rb_tree_tag, tree_order_statistics_node_update>;

void Solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        p.insert(v[i].second);
    }

    sort(v.begin(), v.end());

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x = v[i].second;
        ans += p.order_of_key(x);
        p.erase(x);
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
