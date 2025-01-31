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
using pbdsl = tree<Tl, null_type, less<Tl>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename Tg>
using pbdsg = tree<Tg, null_type, greater<Tg>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    pbdsl<int> b;
    pbdsg<int> f;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        b.insert(v[i]);
    }

    ll ans = 0;
    for (int j = 0; j < n; j++)
    {
        int x = f.order_of_key(v[j]);
        f.insert(v[j]);

        int idx = b.order_of_key(v[j]);
        auto it = b.find_by_order(idx);
        b.erase(it);
        int y = b.order_of_key(v[j]);

        ans += (1LL * x * y);
    }

    cout << ans << endl;
    return 0;
}