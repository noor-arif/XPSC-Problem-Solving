#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

int ans = 0;
vector<int> a;

void f(int l1, int r1, int l2, int r2)
{
    int mxL = 0, mnR = INT_MAX;
    for (int i = l1; i <= r1; i++)
        mxL = max(mxL, a[i]);
    for (int i = l2; i <= r2; i++)
        mnR = min(mnR, a[i]);
    if (mxL > mnR)
    {
        int r = l2;
        for (int i = l1; i <= r1; i++)
        {
            swap(a[i], a[r]);
            r++;
        }
        ans++;
    }
    if (l1 == r1)
        return;
    int mid1 = (l1 + r1) / 2;
    int mid2 = (l2 + r2) / 2;
    f(l1, mid1, mid1 + 1, r1);
    f(l2, mid2, mid2 + 1, r2);
}

void Solve()
{
    int n;
    cin >> n;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ans = 0;
    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << endl;
        return;
    }
    int mid = (n + 1) / 2;
    f(1, mid, mid + 1, n);
    if (is_sorted(a.begin(), a.end()))
        cout << ans << endl;
    else
        cout << -1 << endl;
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
