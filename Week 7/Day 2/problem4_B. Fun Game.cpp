#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t || s[0] == '1')
    {
        cout << "YES\n";
        return;
    }
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (pos > i)
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
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