#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int a, b;
    cin >> a >> b;
    int rem = max(a, b) - min(a, b);
    if (rem % 2 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
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
