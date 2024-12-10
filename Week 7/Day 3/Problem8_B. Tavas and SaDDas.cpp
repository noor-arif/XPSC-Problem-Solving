#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += pow(2, i);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '7')
            ans += pow(2, (n - i - 1));
    }
    cout << ans << '\n';
    return 0;
}