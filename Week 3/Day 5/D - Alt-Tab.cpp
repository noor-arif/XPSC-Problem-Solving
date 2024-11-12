#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    queue<string> q;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.count(v[i]) == 0)
            q.push(v[i]);
        mp[v[i]]++;
    }
    
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        cout << s[s.size() - 2] << s[s.size() - 1];
    }
    cout << "\n";
    return 0;
}