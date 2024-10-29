#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 1; i <= n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }
    for (int i = 1; i <= m; i++)
    {
        string name2, ip2;
        cin >> name2 >> ip2;
        ip2.pop_back();
        auto it = mp.find(ip2);
        cout << name2 << " " << ip2 << "; #" << it->second << endl;
    }
    return 0;
}