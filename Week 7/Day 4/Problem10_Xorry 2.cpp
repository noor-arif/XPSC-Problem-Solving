#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int x;
    cin >> x;
    int a = 1, b = 0;
    int cnt = 0;
    while (a * 2 <= x)
    {
        a *= 2;
        cnt++;
    }
    int ans = 1;
    bool ok = false;
    for (int i = cnt - 1; i >= 0; i--)
    {
        if ((x & 1 << i))
        {
            b |= (1 << i);
            ok = true;
        }
        else
        {
            if (ok)
                ans *= 2;
        }
    }
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