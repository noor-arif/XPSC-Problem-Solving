#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    stack<char> st;
    bool first = false;
    while (!s.empty())
    {
        if (st.empty())
        {
            st.push(s.back());
            s.pop_back();
            continue;
        }
        if (s.back() == st.top())
        {
            st.pop();
            s.pop_back();
            if (first)
            {
                first = false;
            }
            else
            {
                first = true;
            }
        }
        else
        {
            st.push(s.back());
            s.pop_back();
        }
    }
    if (first)
        cout << yes << endl;
    else
        cout << no << endl;
    return 0;
}