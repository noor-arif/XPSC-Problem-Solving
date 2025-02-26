#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 1; i <= min(k, 2); i++)
    {
        if (i == 1)
        {
            if (a[0] < b[m - 1])
            {
                swap(a[0], b[m - 1]);
            }
        }
        else
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            swap(a[n - 1], b[0]);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i];
    if (k < 3 or k % 2 == 0)
        cout << ans << endl;
    else
    {
        ans -= a[0];
        ans += b[m - 1];
        cout << ans << endl;
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
