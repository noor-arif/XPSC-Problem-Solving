#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

const ll maxN = 1e5 + 9;
ll a[maxN], t[maxN * 4], lazy[maxN * 4];
string s;

void push(int n, int b, int e)
{
    if (lazy[n] == 0)
        return;
    if (lazy[n] % 2 == 1)
    {
        if (b != e)
        {
            int l = (2 * n), r = (2 * n) + 1;
            lazy[l] += 1;
            lazy[r] += 1;
        }
        else
        {
            if (t[n] == 0)
                t[n] = 1;
            else
                t[n] = 0;
        }
    }
    lazy[n] = 0;
}

// ll merge(ll l, ll r)
// {
//     return (l ^ r);
// }

void build(int n, int b, int e)
{
    lazy[n] = 0;
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    // t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        lazy[n] += 1;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);
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
}
void Solve()
{
    int n, m;
    cin >> s >> m;
    n = s.size();
    for (int i = 1; i <= n; i++)
    {
        a[i] = s[i - 1] - '0';
    }
    build(1, 1, n);
    while (m--)
    {
        char type;
        cin >> type;
        if (type == 'I')
        {
            int l, r;
            cin >> l >> r;
            update(1, 1, n, l, r);
        }
        else
        {
            int l;
            cin >> l;
            cout << query(1, 1, n, l, l) << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T, cs = 1;
    cin >> T;
    while (T--)
    {
        cout << "Case " << cs++ << ":" << endl;
        Solve();
    }
    return 0;
}
