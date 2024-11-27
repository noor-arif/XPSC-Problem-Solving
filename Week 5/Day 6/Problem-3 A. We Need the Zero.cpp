#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = -1;
    for (int x = 0; x < 256; x++)
    {
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i] ^ x;
        }
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp ^= b[i];
        }
        if (temp == 0)
        {
            ans = x;
            break;
        }
    }
    cout << ans << '\n';
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