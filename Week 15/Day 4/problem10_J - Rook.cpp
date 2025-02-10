#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    string s;
    cin >> s;
    for (char ch = 'a'; ch <= 'h'; ch++)
    {
        if (ch != s[0])
            cout << ch << s[1] << endl;
    }
    for (char ch = '1'; ch <= '8'; ch++)
    {
        if (ch != s[1])
            cout << s[0] << ch << endl;
    }
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
