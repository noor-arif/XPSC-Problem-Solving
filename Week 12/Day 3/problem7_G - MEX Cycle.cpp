#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    --x;
    --y;
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
        ans[(x + i) % n] = i % 2;
    if (n % 2 || (x - y) % 2 == 0)
        ans[x] = 2;
    for (auto x : ans)
        cout << x << ' ';
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
