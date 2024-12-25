#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
const int mod = 1e9 + 7;
int power(int x, int n)
{
    int ans = 1 % mod;
    while (n)
    {
        if (n & 1)
            ans = (1LL * ans % mod * x % mod) % mod;
        x = (1LL * x % mod * x % mod) % mod;
        n >>= 1;
    }
    return ans;
}
void Solve()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
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
