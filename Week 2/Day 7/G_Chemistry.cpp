#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char ch : s)
        {
            mp[ch]++;
        }
        int cnt = 0;
        for (auto [x, y] : mp)
        {
            if (y % 2 != 0)
                cnt++;
        }
        if (cnt - 1 <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}