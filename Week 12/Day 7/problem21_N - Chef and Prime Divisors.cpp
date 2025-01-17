#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

vector<int> prime;
vector<bool> isPrime(1e5 + 7, 1);

void Sieve(int n = 1e5)
{
    isPrime[0] = isPrime[1] = 0;

    for (int i = 4; i <= n; i += 2)
        isPrime[i] = 0;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }

    prime.push_back(2);
    for (int i = 3; i <= n; i++)
    {
        if (isPrime[i])
            prime.push_back(i);
    }
}

void Solve()
{
    ll a, b;
    cin >> a >> b;

    for (int i = 0; i < prime.size() and prime[i] * prime[i] <= b; i++)
    {
        if (b % prime[i] == 0)
        {
            if (a % prime[i] != 0)
            {
                cout << "No" << endl;
                return;
            }
            while (b % prime[i] == 0)
                b /= prime[i];
        }
    }
    if (b > 1 and a % b != 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Sieve();
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
