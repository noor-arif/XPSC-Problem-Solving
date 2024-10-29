#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v;
    map<string, int> s;
    for (int i = 1; i <= n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    for (auto val : v)
    {
        if (s[val] == 0)
            cout << val << endl;
        s[val]++;
    }

    return 0;
}