#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt1++;
        else
            cnt0++;
    }
    int i;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (cnt0 > 0)
                cnt0--;
            else
                break;
        }
        else
        {
            if (cnt1 > 0)
                cnt1--;
            else
                break;
        }
    }
    cout << n - i << '\n';
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