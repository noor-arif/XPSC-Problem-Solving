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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool ok = true;
    int mx = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mx + 1 or v[i] > i)
        {
            cout << i + 1 << endl;
            ok = false;
            break;
        }
        mx = max(mx, v[i]);
    }
    if (ok)
    {
        cout << -1 << endl;
    }
    return 0;
}