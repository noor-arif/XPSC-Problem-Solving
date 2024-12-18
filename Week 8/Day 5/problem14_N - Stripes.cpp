#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long int ll;
void Solve()
{
    vector<string> mat(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> mat[i];
    }
    char color = '\0';
    for (int i = 0; i < 8; i++)
    {
        bool ok = true;
        for (int j = 0; j < 8; j++)
        {
            if (mat[i][j] != 'R')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            color = 'R';
            break;
        }
    }
    if (color == 'R')
    {
        cout << color;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        bool ok = true;
        for (int j = 0; j < 8; j++)
        {
            if (mat[j][i] != 'B')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            color = 'B';
            break;
        }
    }
    cout << color;
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
        cout << endl;
    }
    return 0;
}