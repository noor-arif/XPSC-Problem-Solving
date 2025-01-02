#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int i = 1;
void Solve()
{
    int n, q;
    cin >> n >> q;
    if (n == 0 or q == 0)
        return;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << "CASE# " << i << ":" << endl;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        if (it == a.end() or *it != x)
            cout << x << " not found" << endl;
        else
            cout << x << " found at " << (it - a.begin()) + 1 << endl;
        i++;
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
