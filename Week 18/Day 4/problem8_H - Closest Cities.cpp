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
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    map<int, int> nearest;
    nearest[1] = 2;
    nearest[n] = n - 1;
    for (int i = 2; i <= n - 1; i++)
    {
        if (abs(a[i - 1] - a[i]) < abs(a[i] - a[i + 1]))
            nearest[i] = i - 1;
        else
            nearest[i] = i + 1;
    }

    vector<ll> pre(n + 1, 0), post(n + 1, 0);
    pre[2] = 1, post[n - 1] = 1;
    for (int i = 3; i <= n; i++)
    {
        if (nearest[i - 1] == i)
            pre[i] = pre[i - 1] + 1;
        else
            pre[i] = pre[i - 1] + abs(a[i] - a[i - 1]);
    }

    for (int i = n - 2; i >= 1; i--)
    {
        if (nearest[i + 1] == i)
            post[i] = post[i + 1] + 1;
        else
            post[i] = post[i + 1] + abs(a[i] - a[i + 1]);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
            cout << abs(pre[x] - pre[y]) << endl;
        else
            cout << abs(post[x] - post[y]) << endl;
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
