#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int diff = 0;
    for (int i = 1; i <= n; i++)
    {
        if (abs(i - v[i]) % k != 0)
        {
            diff++;
        }
    }
    if (diff == 0)
        cout << 0 << '\n';
    else if (diff == 2)
        cout << 1 << '\n';
    else
        cout << -1 << '\n';
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