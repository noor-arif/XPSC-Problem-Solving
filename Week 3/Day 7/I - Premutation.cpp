#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mat[n + 5][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        map<int, int> mp1;
        map<int, int> mp2;
        for (int i = 1; i <= n; i++)
        {
            mp1[mat[i][n - 1]] = i;
            mp2[mat[i][n - 1]]++;
        }
        int idx = 0, val;
        for (auto u : mp2)
        {
            if (u.second == 1)
                idx = u.first;
            else
                val = u.first;
        }
        for (int i = 1; i < n; i++)
        {
            cout << mat[mp1[idx]][i] << " ";
        }
        cout << val << '\n';
    }
    return 0;
}