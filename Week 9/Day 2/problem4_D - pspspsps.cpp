#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 0, s1 = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == 's')
            s1++;
        else if (s[i] == 'p')
            p++;
    }
    if (s1 == 0 or p == 0)
    {
        if ((p != 0 and s[n - 1] == 's') or (s1 != 0 and s[0] == 'p') or (s[0] == 'p' and s[n - 1] == 's'))
            cout << no;
        else
            cout << yes;
    }
    else
        cout << no;
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
