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
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
            y++;
        else if (s[i] == 'S')
            y--;
        else if (s[i] == 'E')
            x++;
        else
            x--;
    }
    if (abs(x) % 2 != 0 or abs(y) % 2 != 0)
    {
        cout << no << endl;
        return;
    }
    x /= 2;
    y /= 2;
    int E = 0, W = 0, N = 0, S = 0;
    if (!x && !y)
    {
        if (n == 2)
        {
            cout << no << endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                N = 1;
                S = 1;
            }
        }
        if (!N)
            E = 1, W = 1;
    }
    if (y > 0)
        N = y;
    else if (y < 0)
        S = -y;
    if (x > 0)
        E = x;
    else if (x < 0)
        W = -x;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N' && N)
        {
            cout << 'R';
            N--;
        }
        else if (s[i] == 'S' && S)
        {
            cout << 'R';
            S--;
        }
        else if (s[i] == 'E' && E)
        {
            cout << 'R';
            E--;
        }
        else if (s[i] == 'W' && W)
        {
            cout << 'R';
            W--;
        }
        else
            cout << 'H';
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
