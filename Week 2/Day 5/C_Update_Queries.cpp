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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(m);
        set<int> st;
        for (int i = 0; i < m; i++)
            cin >> v[i];
        for (int val : v)
            st.insert(val - 1);
        string c;
        cin >> c;
        sort(c.begin(), c.end());
        int idx = 0;
        for (int val : st)
            s[val] = c[idx++];
        cout << s << '\n';
    }
    return 0;
}