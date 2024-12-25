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
    int n;
    cin >> n;
    vector<int> v(n);
    int big = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        big = max(v[i], big);
    }
    int GCD = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = big - v[i];
        sum += diff;
        GCD = gcd(diff, GCD);
    }
    cout << sum / GCD << " " << GCD << endl;
    return 0;
}