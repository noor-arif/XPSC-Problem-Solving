#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int a, b;
    cin >> a >> b;
    int XOR = a ^ b;
    cout << XOR << '\n';
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