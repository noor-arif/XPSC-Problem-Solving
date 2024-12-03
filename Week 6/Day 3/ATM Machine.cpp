#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (k >= v[i])
        {
            k -= v[i];
            ans += "1";
        }
        else
            ans += "0";
    }
    cout << ans << '\n';
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