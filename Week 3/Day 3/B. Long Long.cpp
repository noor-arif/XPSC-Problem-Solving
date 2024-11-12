#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, cnt = 0;
        bool flage = false;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= 0)
            {
                if (x < 0)
                    flage = true;
            }
            else
            {
                if (flage)
                    cnt++;
                flage = false;
            }
            if (x < 0)
                x *= -1;
            sum += x;
        }
        if (flage)
            cnt++;
        cout << sum << " " << cnt << '\n';
    }
    return 0;
}