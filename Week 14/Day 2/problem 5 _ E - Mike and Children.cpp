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
    vector<int> v(n), cnt(200005, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cnt[v[i] + v[j]]++;
            ans = max(ans, cnt[v[i] + v[j]]);
        }
    }
    cout << ans << endl;
    return 0;
}