#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll b, c, d, a = 0;
    cin >> b >> c >> d;
    bool f = 0;
    for (int i = 0; i <= 62; i++)
    {
        bool fb = 0, fc = 0, fd = 0;
        if (b & (1LL << i))
            fb = 1;
        if (c & (1LL << i))
            fc = 1;
        if (d & (1LL << i))
            fd = 1;
        if (fb == 0 && fc == 0 && fd == 0)
            ;
        else if (fb == 0 && fc == 0 && fd == 1)
            a |= 1LL << i;
        else if (fb == 0 && fc == 1 && fd == 0)
            a |= 1LL << i;
        else if (fb == 0 && fc == 1 && fd == 1)
            f = 1;
        else if (fb == 1 && fc == 0 && fd == 0)
            f = 1;
        else if (fb == 1 && fc == 0 && fd == 1)
            a |= 1LL << i;
        else if (fb == 1 && fc == 1 && fd == 0)
            a |= 1LL << i;
        else if (fb == 1 && fc == 1 && fd == 1)
            ;
    }
    if (f)
        a = -1;
    cout << a << '\n';
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