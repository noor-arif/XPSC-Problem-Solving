#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<char, int> mp;
    for (char i = 'a'; i <= 'z'; i++)
    {
        mp[i] = 0;
    }
    string s = "";
    for (int val : v)
    {
        for (auto [x, y] : mp)
        {
            if (y == val)
            {
                s += x;
                mp[x]++;
                break;
            }
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