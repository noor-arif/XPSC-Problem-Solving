#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            else
            {
                ans -= 2;
                l++, r--;
            }
        }
        // for (int i = 0, j = n - 1; i < n / 2; i++, j--)
        // {
        //     if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
        //     {
        //         ans -= 2;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        cout << ans << '\n';
    }
    return 0;
}