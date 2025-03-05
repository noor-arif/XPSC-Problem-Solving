#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int mx = ceil(x * 1.0 / k), my = ceil(y * 1.0 / k);
    if (my >= mx)
        cout << 1LL * (2 * my) << endl;
    else
        cout << (1LL * 2 * mx) - 1 << endl;
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
