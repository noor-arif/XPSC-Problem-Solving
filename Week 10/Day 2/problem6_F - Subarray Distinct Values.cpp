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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 0;
    int j = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        while (j < n && ((int)mp.size() < k || mp.count(v[j]) > 0))
        {
            mp[v[j]]++;
            j++;
        }
        ans += (j - i);
        mp[v[i]]--;
        if (mp[v[i]] == 0)
            mp.erase(v[i]);
    }
    cout << ans << endl;
    return 0;
}