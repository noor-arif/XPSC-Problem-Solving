#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    string s;
    cin >> s;
    ll n = (ll)s.size(), mn = 1e18;
    for (char i = 'a'; i <= 'z'; i++)
    {
        ll c = 0, mx = 0;
        for (ll j = 0; j < n; j++)
        {
            if (s[j] != i)
            {
                c++;
                mx = max(mx, c);
            }
            else
                c = 0;
        }
        mn = min(mx, mn);
    }
    if (mn == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        ll c = 0;
        while (mn != 1)
        {
            mn /= 2;
            c++;
        }
        cout << c + mn << endl;
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
