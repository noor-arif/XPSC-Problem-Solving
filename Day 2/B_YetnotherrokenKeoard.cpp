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
        stack<int> s, c;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'B')
                c.push(i);
            else if (str[i] >= 'a' && str[i] <= 'z' && str[i] != 'b')
                s.push(i);
            else if (str[i] == 'B' && !c.empty())
            {
                str[c.top()] = '1';
                c.pop();
            }
            else if (str[i] == 'b' && !s.empty())
            {
                str[s.top()] = '1';
                s.pop();
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != 'B' && str[i] != 'b' && str[i] != '1')
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}