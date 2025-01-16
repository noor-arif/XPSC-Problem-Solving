#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool isPrime(ll n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0 or n < 2)
        return false;
    for (int i = 3; i * i <= n; i += 2)
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
    int n;
    cin >> n;
    vector<bool> v(n + 1, 0);
    v[2] = 1;
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime(i))
            v[i] = 1;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 6; i <= n; i++)
    {
        cnt1 = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0 and v[j])
                cnt1++;
            if (cnt1 > 2)
                break;
        }
        if (cnt1 == 2)
            cnt2++;
    }
    cout << cnt2 << endl;
    return 0;
}