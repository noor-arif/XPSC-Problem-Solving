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
    int ans = 0, x = 1, y;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n < 4)
    {
        cout << 2 << endl;
        return;
    }
    while (true)
    {
        ans++;
        x = (x + 1) * 2;
        if (x > n)
            break;
        y = x;
    }
    if (y == n)
        cout << ans << endl;
    else
        cout << ans + 1 << endl;
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
