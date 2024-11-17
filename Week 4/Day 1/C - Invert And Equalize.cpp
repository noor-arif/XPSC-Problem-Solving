#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int cnt0 = 0, cnt1 = 0;
    while (i < n)
    {
        if (s[i] == '0')
        {
            cnt0++;
            while (i < n)
            {
                if (s[i] == '1')
                    break;
                else
                    i++;
            }
        }
        else
        {
            cnt1++;
            while (i < n)
            {
                if (s[i] == '0')
                    break;
                else
                    i++;
            }
        }
    }
    cout << min(cnt1, cnt0) << '\n';
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