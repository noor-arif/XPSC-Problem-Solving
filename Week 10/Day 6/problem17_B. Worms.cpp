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

    int n;
    cin >> n;
    vector<int> a(n), pref(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i - 1];
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        auto it = lower_bound(pref.begin(), pref.end(), m);
        cout << it - pref.begin() << endl;
    }

    return 0;
}