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
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            if (s[0] == 'a')
            {
                s.insert(s.begin(), 'b');
            }
            else
            {
                s.insert(s.begin(), 'a');
            }
            cout << s << endl;
            continue;
        }
        bool b = true;
        for (auto i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] == 'a')
                {
                    s.insert(s.begin() + i + 1, 'b');
                    b = false;
                    break;
                }
                else
                {
                    s.insert(s.begin() + i + 1, 'a');
                    b = false;
                    break;
                }
            }
        }
        if (b)
        {
            if (s[0] == 'a')
            {
                s.insert(s.begin(), 'b');
            }
            else
            {
                s.insert(s.begin(), 'a');
            }
        }
        cout << s << endl;
    }

    return 0;
}