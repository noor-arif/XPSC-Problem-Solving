#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s, ans = "Ramos";
    cin >> s;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (st.empty())
        {
            st.push(ch);
            continue;
        }
        if (ch != st.top())
        {
            st.pop();
            if(ans == "Zlatan")
                ans = "Ramos";
            else
                ans = "Zlatan";
        }
        else
            st.push(ch);
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}