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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        ll key;
        cin >> key;
        int l = 0, r = n - 1, mid, ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key >= a[mid])
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}