#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    string a, b, ans = "";
    cin >> a >> b;
    int na = a.size(), nb = b.size();
    if (a[na - 1] == b[nb - 1])
    {
        cout << yes << endl;
        cout << '*' << a[na - 1] << endl;
        return;
    }
    if (a[0] == b[0])
    {
        cout << yes << endl;
        cout << a[0] << '*' << endl;
        return;
    }
    for (int i = 0; i < na - 1; i++)
    {
        for (int j = 0; j < nb - 1; j++)
        {
            if (a[i] == b[j] and a[i + 1] == b[j + 1])
            {
                ans.push_back(a[i]);
                ans.push_back(a[i + 1]);
                break;
            }
        }
        if (!ans.empty())
            break;
    }
    if (ans.empty())
        cout << no << endl;
    else
    {
        cout << yes << endl;
        cout << '*' << ans << '*' << endl;
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
