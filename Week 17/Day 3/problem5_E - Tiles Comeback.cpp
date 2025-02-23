#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> mp;
    int temp = k, i;
    for (i = 0; i < n and temp > 0; i++)
    {
        if (v[0] == v[i])
        {
            mp[v[0]]++;
            temp--;
        }
    }
    while (i < n)
    {
        if (v[i] == v[n - 1])
        {
            mp[v[n - 1]]++;
        }
        i++;
    }
    if (mp[v[0]] < k or mp[v[n - 1]] < k)
        cout << no << endl;
    else
        cout << yes << endl;
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
