#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int q;
    cin >> q;
    string ans = "";
    bool flage = false;
    int first = -1, last = -1;
    while (q--)
    {
        int x;
        cin >> x;
        if (flage)
        {
            if (x >= last and x <= first)
            {
                last = x;
                ans += "1";
            }
            else
                ans += "0";
        }
        else
        {
            if (first == -1)
            {
                first = x, last = x;
                ans += "1";
            }
            else if (last <= x)
            {
                last = x;
                ans += "1";
            }
            else if (first >= x)
            {
                last = x;
                flage = true;
                ans += "1";
            }
            else
                ans += "0";
        }
    }
    cout << ans << '\n';
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