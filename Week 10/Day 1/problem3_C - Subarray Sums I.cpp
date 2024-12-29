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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = 0, ans = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum == x)
            ans++;
        else if (sum > x)
        {
            while (sum > x && l <= r)
            {
                sum -= v[l];
                l++;
                if (sum == x)
                    ans++;
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}