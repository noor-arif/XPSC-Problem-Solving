#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<ll>> v(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> v[i][j];
    }
    ll curi = 0, curj = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        ll sum = 0;
        if (s[i] == 'D')
        {
            for (ll j = 0; j < m; j++)
                sum += v[curi][j];
            v[curi][curj] = -sum;
            curi++;
        }
        else
        {
            for (ll j = 0; j < n; j++)
                sum += v[j][curj];
            v[curi][curj] = -sum;
            curj++;
        }
    }
    ll sum2 = 0;
    for (ll i = 0; i < m; i++)
        sum2 += v[n - 1][i];
    v[n - 1][m - 1] = -sum2;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    // cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
