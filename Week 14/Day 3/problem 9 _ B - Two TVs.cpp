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
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    ll sum = 0;
    bool ok = true;
    for (auto [key, val] : d)
    {
        sum += val;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << yes << endl;
    else
        cout << no << endl;
    return 0;
}