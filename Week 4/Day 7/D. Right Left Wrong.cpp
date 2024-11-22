#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    cin >> s;
    vector<ll> ps(n + 1, 0);
    for (int i = 1; i <= n; i++)
        ps[i] = ps[i - 1] + a[i - 1];

    int i = 0, j = n - 1;
    ll total = 0;
    while (i <= j)
    {
        while (i < n)
        {
            if (s[i] == 'L')
                break;
            i++;
        }
        if (i == n)
            break;
        while (j >= 0)
        {
            if (s[j] == 'R')
                break;
            j--;
        }
        if (j == -1)
            break;
        if (j < i)
            break;
        total += ps[j + 1] - ps[i];
        i++, j--;
    }
    cout << total << '\n';
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