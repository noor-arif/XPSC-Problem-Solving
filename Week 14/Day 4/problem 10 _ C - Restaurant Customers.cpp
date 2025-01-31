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
    map<int, int> d;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        d[a]++;
        d[b + 1]--;
    }
    ll ans = INT_MIN, sum = 0;
    for (auto [x, y] : d)
    {
        sum += y;
        // cout<<x<<"->"<<y<<" = "<<sum<<endl;
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}