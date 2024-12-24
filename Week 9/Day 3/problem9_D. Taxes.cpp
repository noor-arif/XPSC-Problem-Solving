#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool isPrime(ll n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    if (isPrime(n))
        cout << 1 << endl;
    else if (n % 2 == 0 or isPrime(n - 2))
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}