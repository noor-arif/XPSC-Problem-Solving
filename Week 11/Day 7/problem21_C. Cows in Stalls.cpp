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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto ok = [&](int dist)
    {
        int co_ord = v[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - co_ord >= dist)
            {
                cnt++;
                co_ord = v[i];
            }
            if (cnt == k)
                return true;
        }
        return false;
    };
    int l = 1, r = v[n - 1] - v[0], mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << r << endl;
    return 0;
}