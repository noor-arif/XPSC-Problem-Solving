#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll x;
    cin >> x;
    vector<ll> lcm;
    ll i = 2;
    while (i * i <= x)
    {
        if (x % i == 0)
        {
            ll cur = 1;
            while (x % i == 0)
            {
                x /= i;
                cur *= i;
            }
            lcm.push_back(cur);
        }
        i++;
    }
    if (x > 1)
        lcm.push_back(x);
    ll n = lcm.size(), ans_A = 1e18, ans_B = 1e18, k = 0;
    while (k < (1 << n))
    {
        ll a = 1, b = 1, j = 0;
        while (j < n)
        {
            if ((k >> j) & 1)
                a *= lcm[j];
            else
                b *= lcm[j];
            j++;
        }
        if (max(a, b) < max(ans_A, ans_B))
        {
            ans_A = a, ans_B = b;
        }
        k++;
    }
    cout << ans_A << " " << ans_B << endl;
    return 0;
}