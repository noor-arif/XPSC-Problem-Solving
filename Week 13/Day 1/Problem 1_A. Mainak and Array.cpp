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
    int ans = v[n - 1] - v[0];
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, v[i] - v[i + 1]);
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, v[n - 1] - v[i]);
    for (int i = 1; i < n; i++)
        ans = max(ans, v[i] - v[0]);
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
