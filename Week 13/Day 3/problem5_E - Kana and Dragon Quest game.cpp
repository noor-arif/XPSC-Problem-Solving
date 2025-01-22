#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    while (x > 20 and n > 0)
    {
        // if(n<=0) break;
        x = (x / 2) + 10;
        n--;
    }
    while (x > 0 and m > 0)
    {
        x -= 10;
        m--;
    }
    if (x > 0)
        cout << no << endl;
    else
        cout << yes << endl;
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
