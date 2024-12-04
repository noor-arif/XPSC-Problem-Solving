#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    string s[3];
    for (int i = 0; i < 3; i++)
        cin >> s[i];

    int x, y;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i][j] == '?')
            {
                x = i, y = j;
            }
        }
    }
    if (y == 0)
    {
        if ((s[x][1] == 'A' && s[x][2] == 'B') || (s[x][1] == 'B' && s[x][2] == 'A'))
            cout << "C\n";
        else if ((s[x][1] == 'A' && s[x][2] == 'C') || (s[x][1] == 'C' && s[x][2] == 'A'))
            cout << "B\n";
        else
            cout << "A\n";
    }
    else if (y == 1)
    {
        if ((s[x][0] == 'A' && s[x][2] == 'B') || (s[x][0] == 'B' && s[x][2] == 'A'))
            cout << "C\n";
        else if ((s[x][0] == 'A' && s[x][2] == 'C') || (s[x][0] == 'C' && s[x][2] == 'A'))
            cout << "B\n";
        else
            cout << "A\n";
    }
    else
    {
        if ((s[x][0] == 'A' && s[x][1] == 'B') || (s[x][0] == 'B' && s[x][1] == 'A'))
            cout << "C\n";
        else if ((s[x][0] == 'A' && s[x][1] == 'C') || (s[x][0] == 'C' && s[x][1] == 'A'))
            cout << "B\n";
        else
            cout << "A\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}