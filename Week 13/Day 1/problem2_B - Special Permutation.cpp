#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n, 0);
    vector<bool> bol(n + 1, false);
    v[0] = a, v[n - 1] = b;
    bol[a] = true, bol[b] = true;
    int a1 = n;
    for (int i = 1; i < n / 2; i++)
    {
        if (a1 < a)
            break;
        while (a1 >= 1 and bol[a1] == true)
        {
            a1--;
        }
        if (a1 < a)
            break;
        if (bol[a1] == false)
        {
            v[i] = a1;
            bol[a1] = true;
            a1--;
        }
    }
    for (int i = n - 2; i >= n / 2; i--)
    {
        if (b <= 0)
            break;
        while (b >= 1 and bol[b] == true)
            b--;
        if (b <= 0)
            break;
        if (bol[b] == false)
        {
            v[i] = b;
            bol[b] = true;
            b--;
        }
    }
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
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
