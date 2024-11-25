#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2 << '\n';
    else
        cout << (n / 2) + 1 << '\n';
    int l = 1, r = 3 * n;
    while (l < r)
    {
        cout << l << " " << r << '\n';
        l += 3, r -= 3;
    }
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