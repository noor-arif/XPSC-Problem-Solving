#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), b(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> b[i];
    set<ll> s;
    for (auto x : b)
    {
        if (s.count(x))
            continue;
        s.insert(x);
        ll p = pow(2, x);
        for (int i = 0; i < n; i++)
        {
            if (a[i] % p == 0)
            {
                a[i] += pow(2, x - 1);
            }
        }
    }
    for (auto val : a)
        cout << val << " ";
    cout << '\n';
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