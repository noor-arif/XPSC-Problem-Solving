#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int la = 0, lb = 0;
    while (la < n and lb < m)
    {
        if (a[la] == b[lb])
            la++, lb++;
        else
            lb++;
    }
    cout << la << endl;
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
