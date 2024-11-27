#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> s(n + 1, 0), a(n + 1);
    for (int i = n - k + 1; i <= n; i++)
        cin >> s[i];
    if (n == 1 or k == 1)
    {
        cout << "YES\n";
        return;
    }
    for (int i = n; i >= n - k + 2; i--)
        a[i] = (s[i] - s[i - 1]);
    bool flage = true;
    for (int i = n - k + 2; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            flage = false;
            break;
        }
    }
    if (!flage)
    {
        cout << "NO\n";
        return;
    }
    for (int i = n - k + 1; i > 1; i--)
    {
        a[i] = a[i + 1];
        s[i - 1] = s[i] - a[i];
    }
    a[1] = s[1];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            flage = false;
            break;
        }
    }
    if (flage)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}