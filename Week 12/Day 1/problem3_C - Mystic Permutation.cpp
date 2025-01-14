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
    vector<int> v(n), a;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    a = v;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == v[i])
            swap(a[i], a[i + 1]);
    }
    if (a[n - 1] == v[n - 1])
        swap(a[n - 1], a[n - 2]);
    for (auto val : a)
        cout << val << " ";
    cout << endl;
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
