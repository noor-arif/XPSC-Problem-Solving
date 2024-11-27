#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n == 2 && s == "()")
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    string ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back('(');
    }
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(')');
    }
    if (ans.find(s) < 2 * n)
    {
        for (int i = 0; i < n; i++)
            cout << "()";
        cout << '\n';
    }
    else
        cout << ans << '\n';
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