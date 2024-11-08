#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}