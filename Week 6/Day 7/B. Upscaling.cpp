#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t = 2;
        char first = '#';
        char second = '.';
        if (i % 2 == 1)
        {
            first = '.';
            second = '#';
        }
        while (t--)
        {
            for (int j = 0; j < n; j++)
            {
                int p = 2;
                while (p--)
                {
                    if (j % 2 == 0)
                        cout << first;
                    else
                        cout << second;
                }
            }
            cout << '\n';
        }
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