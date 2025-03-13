#include <bits/stdc++.h>
#define endl '\n'
#define int long long int
using namespace std;

const int maxN = 1e5 + 9;
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
    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b or i > e)
        return;
    if (b == e)
    {
        if (v == 0)
            t[n] = v;
        else
            t[n] += v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i, int j)
{
    if (e < i or b > j)
        return 0;
    if (b >= i and e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, cn = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << cn++ << ":" << endl;
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, 1, n);
        while (q--)
        {
            int op;
            cin >> op;
            if (op == 1)
            {
                int idx;
                cin >> idx;
                idx++;
                cout << query(1, 1, n, idx, idx) << endl;
                update(1, 1, n, idx, 0);
            }
            else if (op == 2)
            {
                int idx, v;
                cin >> idx >> v;
                idx++;
                update(1, 1, n, idx, v);
            }
            else
            {
                int i, j;
                cin >> i >> j;
                i++, j++;
                cout << query(1, 1, n, i, j) << endl;
            }
        }
    }
    return 0;
}