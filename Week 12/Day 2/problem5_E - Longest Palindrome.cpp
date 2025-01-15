#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool isPelindrom(string s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++, r--;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        string t = s;
        reverse(begin(t), end(t));
        if (mp.find(t) == mp.end())
            mp[s] = "";
        else
            mp[t] = s;
    }
    string left = "", right = "", middle = "";
    for (auto [x, y] : mp)
    {
        if (y != "")
        {
            reverse(begin(y), end(y));
            left += x, right += y;
        }
        else if (isPelindrom(x))
        {
            middle = x;
        }
    }
    reverse(right.begin(), right.end());
    cout << left.size() + right.size() + middle.size() << endl;
    cout << left << middle << right << endl;

    return 0;
}