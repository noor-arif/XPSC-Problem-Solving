#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    bool flage = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != c[i] && b[i] != c[i])
        {
            flage = true;
            break;
        }
    }
    if (flage)
        cout << "YES\n";
    else
        cout << "NO\n";
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