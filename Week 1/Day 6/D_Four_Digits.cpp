#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for (int i = s.size(); i < 4; i++)
    {
        cout << 0;
    }
    cout << s;
    return 0;
}