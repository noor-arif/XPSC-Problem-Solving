#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    char ch;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if (mx < mp[s[i]])
            ch = s[i];
        mx = max(mx, mp[s[i]]);
    }
    mx = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ch)
        {
            c++;
            mx = max(c, mx);
        }
        else
            c = 0;
    }
    if (mx == 0)
        cout << 0 << endl;
    else
    {
        c = 0;
        while (mx != 1)
        {
            c++;
            mx /= 2;
        }
        cout << c + 1 << endl;
    }
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
