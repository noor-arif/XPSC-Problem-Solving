#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), prefixSum(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    prefixSum[0] = a[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + a[i];
    while (q--)
    {
        ll val;
        cin >> val;
        auto it = lower_bound(prefixSum.begin(), prefixSum.end(), val);
        if (it == prefixSum.end())
            cout << -1 << endl;
        else
            cout << (it - prefixSum.begin()) + 1 << endl;
    }
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