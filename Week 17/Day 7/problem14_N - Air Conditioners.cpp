#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> ans(n + 1);
    vector<int> idx(k);
    for (int i = 0; i < k; i++)
        cin >> idx[i];
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        ans[idx[i]] = x;
    }
    ans[0] = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        ll val = ans[i - 1] + 1;
        if (ans[i] == 0)
            ans[i] = val;
        else
            ans[i] = min(ans[i], val);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ll val = ans[i + 1] + 1;
        ans[i] = min(ans[i], val);
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
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
