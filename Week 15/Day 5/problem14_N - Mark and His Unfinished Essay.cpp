#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, c, q;
    string s;
    cin >> n >> c >> q >> s;
    ll curr = n;
    vector<pair<ll, ll>> len(c), query(c);
    for (ll i = 0; i < c; i++)
    {
        cin >> query[i].first >> query[i].second;
        ll qlen = query[i].second - query[i].first + 1;
        len[i].first = curr + 1;
        len[i].second = curr + qlen;
        curr = len[i].second;
    }
    while (q--)
    {
        ll k;
        cin >> k;
        for (ll i = c - 1; i >= 0; i--)
        {
            if (k >= len[i].first and k <= len[i].second)
            {
                ll gap = k - len[i].first;
                k = query[i].first + gap;
            }
        }
        cout << s[k - 1] << endl;
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
