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
    int ans = 0, gold = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= k)
            gold += x;
        if (x == 0 and gold > 0)
        {
            ans++;
            gold--;
        }
    }
    cout << ans << endl;
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
