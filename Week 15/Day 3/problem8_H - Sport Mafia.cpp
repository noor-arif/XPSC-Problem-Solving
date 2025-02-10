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
    ll n, k;
    cin >> n >> k;
    ll x = sqrt(9 + 8 * (n + k)) - 3;
    x /= 2;
    cout << n - x << endl;
    return 0;
}