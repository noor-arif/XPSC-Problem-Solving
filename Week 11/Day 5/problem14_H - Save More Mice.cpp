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
    vector<int> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    ll cat_pos = 0;
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (cat_pos < v[i])
        {
            cat_pos += (n - v[i]);
            cnt++;
        }
        else
            break;
    }
    cout << cnt << endl;
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
