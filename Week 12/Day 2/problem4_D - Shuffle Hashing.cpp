#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    string p, h, n;
    cin >> p >> h;
    sort(p.begin(), p.end());
    int n1 = p.size(), n2 = size(h);
    bool ok = false;
    for (int i = 0; i <= n2 - n1; i++)
    {
        n = h.substr(i, n1);
        sort(begin(n), end(n));
        if (n == p)
        {
            ok = true;
            break;
        }
    }
    cout << (ok ? yes : no) << endl;
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
