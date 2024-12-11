#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    vector<int> a(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        a[i] |= b[i];
        a[i + 1] |= b[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != (a[i] & a[i + 1]))
        {
            cout << -1 << '\n';
            return;
        }
    }
    for (int val : a)
        cout << val << " ";
    cout << '\n';
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