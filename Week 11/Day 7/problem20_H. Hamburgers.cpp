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
    string s;
    cin >> s;
    ll b1, b2, b3, p1, p2, p3;
    cin >> b1 >> b2 >> b3;
    cin >> p1 >> p2 >> p3;
    ll r;
    cin >> r;
    ll a = 0, b = 0, c = 0;
    for (auto ch : s)
    {
        if (ch == 'B')
            a++;
        else if (ch == 'S')
            b++;
        else
            c++;
    }
    ll low = 0, high = r + 200;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll z = 0;
        ll r1 = max(a * mid - b1, z);
        ll r2 = max(b * mid - b2, z);
        ll r3 = max(c * mid - b3, z);
        ll price = r1 * p1 + r2 * p2 + r3 * p3;
        if (price <= r)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << high << endl;
    return 0;
}