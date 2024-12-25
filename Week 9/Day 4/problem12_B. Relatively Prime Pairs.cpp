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
    ll l, r;
    cin >> l >> r;
    cout << yes << endl;
    for (ll i = l; i <= r; i += 2)
        cout << i << " " << i + 1 << endl;
    return 0;
}