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
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] -= x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] += x;
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] > -1 && a[r] > -1)
            ans++, l++, r--;
        else if (a[l] < 0 && a[r] < 0)
            break;
        else if (a[l] > -1)
        {
            if (a[l] >= abs(a[r]))
                ans++, l++, r--;
            else
                r--;
        }
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
