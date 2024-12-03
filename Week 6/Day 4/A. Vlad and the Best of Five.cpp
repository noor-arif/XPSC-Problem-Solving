#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ca = 0, cb = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            ca++;
        else
            cb++;
    }
    if (ca > cb)
        cout << "A\n";
    else
        cout << "B\n";
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