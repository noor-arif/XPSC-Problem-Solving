#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= 2 * n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    bool flage = true;
    for (auto v : mp)
    {
        if (v.second > 2)
        {
            flage = false;
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