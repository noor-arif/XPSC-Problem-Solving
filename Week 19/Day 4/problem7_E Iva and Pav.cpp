#include <bits/stdc++.h>
#define endl '\n'
#define int long long int
using namespace std;

const int maxN = 2e5 + 9;
int a[maxN], t[4 * maxN];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] & t[r]);
}

int query(int n, int b, int e, int i, int j)
{
    if (e < i or b > j)
        return 2147483647;
    if (b >= i and e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return (query(l, b, mid, i, j) & query(r, mid + 1, e, i, j));
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, 1, n);

        int q;
        cin >> q;
        while (q--)
        {
            int l, k;
            cin >> l >> k;
            int lo = l, r = n, ans = -1;
            while (lo <= r)
            {
                int mid = (lo + r) / 2;
                if (query(1, 1, n, l, mid) >= k)
                {
                    ans = mid;
                    lo = mid + 1;
                }
                else
                    r = mid - 1;
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}