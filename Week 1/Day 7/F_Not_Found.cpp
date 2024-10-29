#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, int> mp;
    for (char ch : s)
    {
        mp[ch]++;
    }
    bool flage = true;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp[i] == 0)
        {
            cout << i << endl;
            flage = false;
            break;
        }
    }
    if (flage)
    {
        cout << "None";
    }
    return 0;
}