#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct node
{
    int mn, count;
};

const int maxN = 1e5 + 9, inf = 1e9 + 9;
int a[maxN];
node t[4 * maxN];

node merge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if (ans.mn == l.mn)
        ans.count += l.count;
    if (ans.mn == r.mn)
        ans.count += r.count;
    return ans;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b];
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b or i > e)
        return;
    if (b == e)
    {
        t[n].mn = v;
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i or b > j)
        return {inf, 0};
    if (b >= i and e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    auto ll = query(l, b, mid, i, j);
    auto rr = query(r, mid + 1, e, i, j);
    return merge(ll, rr);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);

    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            i++;
            update(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            auto qq = query(1, 1, n, l, r);
            cout << qq.mn << " " << qq.count << endl;
        }
    }
    return 0;
}