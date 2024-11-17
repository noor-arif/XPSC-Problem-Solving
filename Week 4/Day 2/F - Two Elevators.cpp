#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a1 = a - 1;
    int a2 = abs(b - c) + c - 1;
    if (a1 == a2)
        cout << 3 << '\n';
    else if (a1 < a2)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
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