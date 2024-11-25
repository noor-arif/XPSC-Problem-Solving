#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    n = s.length();
    bool flage = false;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            continue;
        if (s[i] > s[n - i - 1])
            flage = true;
        else
            break;
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (flage)
        cout << rev << s << '\n';
    else
        cout << s << '\n';
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