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
    ll a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            b += 2;
        else
            b++;
        a += x;
    }
    if (n == 1 or a < b)
        cout << no << endl;
    else
        cout << yes << endl;
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
