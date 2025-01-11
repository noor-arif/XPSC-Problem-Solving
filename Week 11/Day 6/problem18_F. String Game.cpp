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
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    auto ok = [&](int del)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= del; i++)
            bad[v[i]] = true;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && t[i] == p[j])
                j++;
            if (j == m)
                return true;
        }
        return false;
    };
    int l = 0, r = n - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    if (ans == -1)
        cout << 0 << endl;
    else
        cout << ans + 1 << endl;
    return 0;
}