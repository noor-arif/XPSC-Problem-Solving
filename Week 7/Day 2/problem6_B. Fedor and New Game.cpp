#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int countOne(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1];
    for (int i = 0; i <= m; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int XOR = a[i] ^ a[m];
        if (countOne(XOR) <= k)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
