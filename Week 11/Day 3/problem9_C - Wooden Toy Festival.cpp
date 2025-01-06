#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool check(int mid, vector<int> &v)
{
    vector<int> r;
    int val = v[0] - mid;
    r.push_back(val);
    for (int i = 1; i < v.size(); i++)
    {
        if (abs(val - v[i]) > mid)
        {
            val = v[i] - mid;
            r.push_back(val);
        }
    }
    if (r.size() <= 3)
        return true;
    return false;
}
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    int l = 0, h = 1e9, ans = 1e9;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (check(mid, v))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
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
