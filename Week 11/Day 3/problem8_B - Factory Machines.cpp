#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> machines(n);
    for (int i = 0; i < n; i++)
        cin >> machines[i];
    ll low = 0, hi = 1e18, ans = 1e18;
    while (low <= hi)
    {
        ll mid = (low + hi) / 2;
        ll products = 0;
        for (int i = 0; i < n; i++)
            products += min(mid / machines[i], (ll)1e9);
        if (products >= m)
        {
            if (mid < ans)
                ans = mid;
            hi = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans << endl;
    return 0;
}