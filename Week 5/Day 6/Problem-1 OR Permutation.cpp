#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void Solve()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
        cout << i << " ";
    cout << '\n';
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