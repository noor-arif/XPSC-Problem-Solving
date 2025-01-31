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
using pbds = tree<Tl, null_type, less_equal<Tl>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x - a[i];
    }
    ll ans = 0;
    pbds<int> p;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(-a[i]);
        p.insert(a[i]);
    }
    cout << ans << endl;
    return 0;
}