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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    bool ok = false;
    for (int i = 2; i <= n; i++)
    {
        if (v[1] != v[i])
        {
            ok = true;
            break;
        }
    }
    if (ok)
    {
        cout << yes << endl;
        int dis;
        for (int i = 2; i <= n; i++)
        {
            if (v[1] != v[i])
            {
                cout << 1 << " " << i << endl;
                dis = i;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (v[1] == v[i])
                cout << dis << " " << i << endl;
        }
    }
    else
        cout << no << endl;
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
