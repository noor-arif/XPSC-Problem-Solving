#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[a[i]] == i)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << 2 << '\n';
    else
        cout << 3 << '\n';
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