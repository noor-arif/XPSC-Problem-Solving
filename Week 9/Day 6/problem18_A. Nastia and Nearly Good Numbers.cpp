#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll a, b;
    cin >> a >> b;
    if (b != 1)
    {
        cout << yes << endl;
        cout << a * b << " " << a << " " << (b + 1LL) * a << endl;
    }
    else
        cout << no << endl;
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
