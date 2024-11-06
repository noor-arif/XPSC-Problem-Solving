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
        char ch;
        cin >> ch;
        string s;
        cin >> s;

        if (ch == 'g')
        {
            cout << 0 << '\n';
        }
        else
        {
            vector<int> green;
            s += s;
            for (int i = 0; i < 2 * n; i++)
            {
                if (s[i] == 'g')
                    green.push_back(i);
            }

            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == ch)
                {
                    // int lb = lower_bound(green.begin(), green.end(), i) - green.begin();
                    // cout<<lb<<" ";
                    auto ub = lower_bound(green.begin(), green.end(), i);
                    ans = max(ans, *ub - i);
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}