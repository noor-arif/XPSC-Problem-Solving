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
    int ans = 0;
    sort(v.begin(), v.end());
    for (int i = 2; i <= 100; i++)
    {
        int cnt = 0, l = 0, r = n - 1;
        while (l < r)
        {
            int sum = v[l] + v[r];
            if (sum == i)
            {
                l++, r--;
                cnt++;
            }
            else if (sum > i)
                r--;
            else
                l++;
        }
        ans = max(ans, cnt);
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
