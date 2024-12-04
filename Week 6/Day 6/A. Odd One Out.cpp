#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
        cout << c << '\n';
    else if (a == c)
        cout << b << '\n';
    else
        cout << a << '\n';
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