#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
#define int long long int
using namespace std;

int digit_sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
void Solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 9)
            s.insert(i);
    }
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            int curr_idx = l;
            while (!s.empty())
            {
                auto it = s.lower_bound(curr_idx);
                if (it == s.end() || curr_idx > r)
                    break;
                a[curr_idx] = digit_sum(a[curr_idx]);
                if (a[curr_idx] <= 9)
                    s.erase(curr_idx);
                curr_idx++;
            }
        }
        else
        {
            int x;
            cin >> x;
            cout << a[x - 1] << endl;
        }
    }
}
int32_t main()
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
