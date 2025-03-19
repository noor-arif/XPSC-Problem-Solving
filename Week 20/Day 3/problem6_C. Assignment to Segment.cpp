#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const ll maxN = 1e5 + 9;
ll a[maxN], t[maxN * 4], lazy[maxN * 4];

// ll merge(ll l, ll r)
// {
//     if(l==r) return l;
//     // return max(l, r);
// }

void push(int n, int b, int e)
{
    if (lazy[n] != -1)
    {
        t[n] =  lazy[n];
        if (b != e)
        {
            int l = (2 * n), r = (2 * n) + 1;
            lazy[l] = lazy[n];
            lazy[r] = lazy[n];
        }
        lazy[n] = -1;
    }
}

void build(int n, int b, int e)
{
    lazy[n] = -1;
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    // t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        lazy[n] = v;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    // t[n] = merge(t[l], t[r]);
}

ll query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (i > e || j < b)
        return -1;
    if (b >= i && e <= j)
        return t[n];
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    ll p1 = query(l, b, mid, i, j);
    ll p2 = query(r, mid + 1, e, i, j);
    return max(p1, p2);
    // return merge(p1, p2);
}

void Solve()
{
    int n, m;
    cin >> n >> m;
    build(1, 1, n);
    while (m--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            int l;
            cin >> l;
            l++;
            cout << query(1, 1, n, l, l) << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
