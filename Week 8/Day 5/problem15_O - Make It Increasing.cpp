#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    reverse(v.begin(), v.end());
    int ans = 0, zero = 0;
    for (int i = 1; i < n; i++)
    {
        while (v[i] != 0 && v[i - 1] <= v[i])
        {
            v[i] = floor(v[i] / 2);
            ans++;
        }
        if (v[i] == 0)
            zero++;
    }
    if(v[0]==0)
        zero++;
    if (zero > 1)
        cout << -1;
    else
        cout << ans;
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
        cout << endl;
    }
    return 0;
}
