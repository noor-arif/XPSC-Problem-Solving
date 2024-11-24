#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    string s = "";
    int j = 0;
    for (int i = 2; i <= n; i += 2)
    {
        s += 'A' + j;
        s += 'A' + j;
        j++;
        if (j == 26)
            j = 0;
    }
    cout << "YES\n"
         << s << '\n';
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