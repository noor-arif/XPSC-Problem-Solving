#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    ll sum = n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    sum = sum - v[0] + v[n - 1];
    cout << (sum <= m ? yes : no) << endl;
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
