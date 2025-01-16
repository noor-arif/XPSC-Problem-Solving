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
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        if (isPerfectSquare(x) && isPrime(sqrtl(x)))
            cout << yes << endl;
        else
            cout << no << endl;
    }
    return 0;
}