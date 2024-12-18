#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n), v, ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int idx = n, min = a[0];
    v.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (min <= a[i])
        {
            min = a[i];
            v.push_back(min);
        }
        else
        {
            idx = i;
            break;
        }
    }
    for (int i = idx; i < n; i++)
        ans.push_back(a[i]);
    for (int i = 0; i < v.size(); i++)
        ans.push_back(v[i]);
    if (is_sorted(ans.begin(), ans.end()))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}