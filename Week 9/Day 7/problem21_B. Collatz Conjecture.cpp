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
    while (x > 1)
    {
        int p = y - (x % y);
        if (p >= k)
        {
            x += k;
            k = 0;
        }
        else
        {
            k -= p;
            x += p;
        }
        while (x % y == 0)
            x = x / y;
        if (k <= 0)
            break;
    }
    if (k > 0)
    {
        k = k % (y - 1);
        x += k;
        while (x % y == 0)
            x = x / y;
    }
    cout << x << endl;
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
