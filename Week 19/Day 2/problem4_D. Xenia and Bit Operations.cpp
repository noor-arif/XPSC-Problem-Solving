#include <bits/stdc++.h>
#define endl '\n'
// #define int long long int
using namespace std;

const int maxN = (1 << 17) + 9;
int a[maxN], t[4 * maxN];

int merge(int ans_l, int ans_r, int seg_l, int seg_r)
{
    int len = seg_r - seg_l + 1;
    int pow = __lg(len);
    if (pow & 1)
        return (ans_l | ans_r);
    else
        return (ans_l ^ ans_r);
}
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
    t[n] = merge(t[l], t[r], b, e);
}
void update(int n, int b, int e, int i, int v)
{
    if (i < b or i > e)
        return;
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r], b, e);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    n = (1 << n);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    while (m--)
    {
        int i, x;
        cin >> i >> x;
        update(1, 1, n, i, x);
        cout << t[1] << endl;
    }
    return 0;
}