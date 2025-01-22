#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void print(int n, char ch)
{
    for (int i = 1; i <= n; i++)
        cout << ch;
}
void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;
    int ud = min(mp['U'], mp['D']), lr = min(mp['L'], mp['R']);
    if (ud == 0 and lr == 0)
        cout << 0 << endl;
    else if (ud == 0)
    {
        cout << 2 << endl;
        cout << "R" << "L";
    }
    else if (lr == 0)
    {
        cout << 2 << endl;
        cout << 'U' << 'D';
    }
    else
    {
        cout << 2 * (lr + ud) << endl;
        print(ud, 'U');
        print(lr, 'R');
        print(ud, 'D');
        print(lr, 'L');
    }
    cout << endl;
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
