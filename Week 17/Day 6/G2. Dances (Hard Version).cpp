#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;

int check(int mid, vector<int> a, vector<int> b)
{
    list<int> mylist;
    a.push_back(mid);
    int n = a.size();
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        mylist.push_back(a[i]);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mylist.back() < b[i])
            break;
        if (mylist.front() < b[i])
            mylist.pop_front();
        else
        {
            mylist.pop_back();
            ans++;
        }
    }
    return ans;
}

void Solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1), b(n);
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end());

    int l = 1, r = m, low = check(1, a, b), idx = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (low == check(mid, a, b))
        {
            idx = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    int high = check(idx + 1, a, b);
    int hidx = m - idx;
    ll ans = 1LL * low * idx + 1LL * high * hidx;
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
