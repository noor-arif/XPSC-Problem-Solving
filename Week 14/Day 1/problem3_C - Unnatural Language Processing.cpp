#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s, r;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' or s[i] == 'e')
            r += 'V';
        else
            r += 'C';
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i > 3 && r[i] == 'C' && r[i - 1] == 'V' && r[i - 2] == 'C')
        {
            s.insert(i - 2, ".");
            i -= 2;
        }
        if (i > 2 && r[i] == 'V' && r[i - 1] == 'C')
        {
            s.insert(i - 1, ".");
            i -= 1;
        }
    }
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