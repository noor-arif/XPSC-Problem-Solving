#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int x, y;
    // 15;
    cin >> x >> y;
    int yq = y / 2, yr = y % 2;
    int ans = yq + yr;
    int disX = (yq * 7) + (yr * 11);
    if (x <= disX)
        cout << ans << '\n';
    else
    {
        int remainX = x - disX;
        int rdx = ceil((double)remainX / 15);
        cout << ans + rdx << '\n';
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