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
        string a, b;
        cin >> a >> b;
        bool flage = true;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'R') || (a[i] == 'R' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'R'))
            {
                flage = false;
                break;
            }
        }
        if (flage)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}