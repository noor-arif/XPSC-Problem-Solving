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
    vector<pair<int, int>> a;
    vector<int> b(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
        ans[a[i].second] = b[i];
    for (int i = 0; i < n; i++)
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
