#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int B = 30;
void Solve()
{
    int n, K;
    cin >> n >> K;
    vector<int> a(n), bits(B + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int k = B; k >= 0; k--)
        {
            if ((a[i] >> k) & 1)
                bits[k]++;
        }
    }
    int ans = 0;
    for (int k = B; k >= 0; k--)
    {
        if (bits[k] == n)
        {
            ans += (1LL << k);
        }
        else
        {
            int need = n - bits[k];
            if (K >= need)
            {
                ans += (1LL << k);
                K -= need;
            }
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