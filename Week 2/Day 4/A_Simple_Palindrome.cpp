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

        string a = "aeiou";
        string s, ans;

        for (int i = 0; i <= 200; i += 5)
        {
            s += a;
        }

        for (int i = 0; i < n; i++)
        {
            ans += s[i];
        }

        sort(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}