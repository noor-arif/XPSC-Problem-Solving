#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        set<char> st;
        for (auto ch : s)
        {
            st.insert(ch);
        }
        vector<char> v;
        for (auto val : st)
        {
            v.push_back(val);
        }
        map<char, char> mp;
        for (int i = 0, j = v.size() - 1; i < v.size(); i++, j--)
        {
            mp[v[i]] = v[j];
        }
        vector<char> ans;
        for (auto ch : s)
        {
            ans.push_back(mp[ch]);
        }
        for (char ch : ans)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}