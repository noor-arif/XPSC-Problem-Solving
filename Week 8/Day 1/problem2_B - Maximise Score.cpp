#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = abs(v[0] - v[1]);
    for (int i = 1; i < n - 1; i++)
    {
        int x = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
        ans = min(ans, x);
    }
    ans = min(ans, abs(v[n - 1] - v[n - 2]));
    cout << ans << '\n';
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