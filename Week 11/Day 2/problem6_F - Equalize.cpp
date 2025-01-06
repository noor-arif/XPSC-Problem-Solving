#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    int mx = 1;
    for (int i = 0; i < v.size(); i++)
    {
        int k = v[i] + n - 1;
        int it = upper_bound(v.begin(), v.end(), k) - v.begin() - i;
        mx = max(mx, it);
    }
    cout << mx << endl;
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
