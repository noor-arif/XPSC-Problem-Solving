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
    ll n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    ll sum = 0, cnt = 0;
    mp[sum] = 1;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        sum += val;
        cnt += mp[sum - x];
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}