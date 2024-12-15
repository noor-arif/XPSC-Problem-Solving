#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a = 0, b = 0;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        if (a < 2)
        {
            ans += "a";
            a++;
        }
        else if (b < 2)
        {
            ans += "b";
            b++;
        }
        else
        {
            i--;
            a = 0, b = 0;
        }
    }
    cout << ans << '\n';
    return 0;
}