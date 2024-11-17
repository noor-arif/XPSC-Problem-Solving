#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    ll m = s % n;
    if (m <= b and a * n + b >= s)
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