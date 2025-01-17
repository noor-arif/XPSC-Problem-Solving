#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<ll, ll> mp;
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        mn = min(mn, v[i]);
    }
    if (mp[mn] == 1)
    {
        cout << yes << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((v[i] % mn) != 0)
            {
                cout << yes << endl;
                return;
            }
        }
        cout << no << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
