#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1 << endl
             << 1 << endl;
        return;
    }
    if (k == 1 or k == n)
    {
        cout << -1 << endl;
        return;
    }
    cout << 3 << endl;
    if (k % 2 == 0)
        cout << 1 << " " << k << " " << k + 1 << endl;
    else
        cout << 1 << " " << k - 1 << " " << k + 2 << endl;
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
