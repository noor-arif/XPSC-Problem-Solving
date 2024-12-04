#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    string s, h = "";
    cin >> s;
    h += s[0];
    h += s[1];
    int n = stoi(h);
    if (n == 0)
        cout << "12" << s[2] << s[3] << s[4] << " AM\n";
    else if (n == 12)
        cout << s << " PM\n";
    else if (n < 12)
        cout << s << " AM\n";
    else
    {
        int x = n - 12;
        if (x < 10)
            cout << "0" << x << s[2] << s[3] << s[4] << " PM\n";
        else
            cout << x << s[2] << s[3] << s[4] << " PM\n";
    }
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