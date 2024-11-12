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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ans++;
                i = i + k - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}