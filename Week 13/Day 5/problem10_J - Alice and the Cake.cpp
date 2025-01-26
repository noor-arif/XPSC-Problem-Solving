#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    map<ll, int> mp;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        mp[v[i]]++;
    }
    if (n == 1)
    {
        cout << yes << endl;
        return;
    }
    bool ok = true;
    priority_queue<ll> pq;
    pq.push(sum);
    while (!pq.empty())
    {
        ll tnum = pq.top();
        pq.pop();

        ll x = tnum / 2;
        ll y = tnum - x;

        if (mp[x])
            mp[x]--;
        else if (x > 1)
            pq.push(x);
        if (mp[y])
            mp[y]--;
        else if (y > 1)
            pq.push(y);

        if (pq.size() > n + 2)
        {
            ok = false;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]])
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? yes : no) << endl;
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
