#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
const ll maxN = 1e5 + 1;
vector<ll> prime;
vector<bool> ar(maxN);
void sieve()
{
    ar[0] = ar[1] = true;
    ll i, j;
    for (i = 2; i < maxN; i++)
    {
        if (ar[i] == false)
        {
            for (j = i * i; j < maxN; j += i)
                ar[j] = true;
        }
    }
    for (int i = 0; i < maxN; i++)
    {
        if (ar[i] == false)
            prime.push_back(i);
    }
}
void Solve()
{
    ll d;
    cin >> d;
    ll ans1, ans2;
    bool val1 = true, val2 = false, ans = false;
    for (ll i = 0; i < 1000000; i++)
    {
        if (prime[i] - 1 >= d and val1)
        {
            val1 = false;
            ans1 = prime[i];
            val2 = true;
        }
        else if (prime[i] - ans1 >= d and val2)
        {
            ans2 = prime[i];
            ans = true;
            break;
        }
    }
    if (ans)
        cout << ans1 * ans2 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sieve();
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
