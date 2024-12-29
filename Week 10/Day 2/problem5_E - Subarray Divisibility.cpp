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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = 0;
    map<ll, int> mp;
    mp[0]++;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i] % n;
        sum = (sum + n) % n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}