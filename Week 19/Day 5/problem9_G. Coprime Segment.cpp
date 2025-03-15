#include <bits/stdc++.h>
#define endl '\n'
#define int long long int
using namespace std;

const int N = 1e5 + 5;
int a[N], t[N * 4];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = (n * 2) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = __gcd(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
        return 0;
    if (i <= b and e <= j)
        return t[n];
    int mid = (b + e) / 2, l = n * 2, r = (n * 2) + 1;
    return __gcd(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);

    int l = 1, r = 1, ans = n + 1;
    while (r <= n)
    {
        while (l <= r && query(1, 1, n, l, r) == 1)
        {
            ans = min(ans, r - l + 1);
            l++;
        }
        r++;
    }
    cout << (ans == n + 1 ? -1 : ans) << endl;
    return 0;
}