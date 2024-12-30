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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        auto low = lower_bound(a.begin(), a.end(), l);
        auto high = upper_bound(a.begin(), a.end(), r);
        cout << high - low << " ";
    }
    return 0;
}