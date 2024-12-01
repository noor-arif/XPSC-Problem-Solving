#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];
    while (!dq.empty() && dq.front() == 0)
        dq.pop_front();
    if (dq.empty())
    {
        cout << 0 << '\n';
        return;
    }
    ll ans = 0;
    n = dq.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (dq[i] == 0)
            ans++;
        else
            ans += dq[i];
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}