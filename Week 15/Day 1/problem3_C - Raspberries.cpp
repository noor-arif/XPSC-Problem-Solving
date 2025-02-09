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
    vector<int> v(n);
    bool ok = false, three = false;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % k == 0)
            ok = true;
        if (v[i] % 2 == 0)
            cnt++;
        if (v[i] == 3 or v[i] == 7)
            three = true;
    }
    if (ok)
    {
        cout << 0 << endl;
        return;
    }
    if (k == 2)
    {
        cout << 1 << endl;
        return;
    }
    if (k == 4)
    {
        if (cnt == 0 and three)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << max(0, 2 - cnt) << endl;
            return;
        }
    }
    if (k == 5)
    {
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int val;
            if (v[i] < 5)
                val = 5 - v[i];
            else
                val = 10 - v[i];
            ans = min(ans, val);
        }
        cout << ans << endl;
        return;
    }
    if (k == 3)
    {
        for (int i = 0; i < n; i++)
        {
            if ((v[i] + 1) % 3 == 0)
            {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    }
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
