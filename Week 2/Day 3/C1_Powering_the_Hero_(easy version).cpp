#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
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
        priority_queue<int> pq;
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(x);
        }
        cout << ans << '\n';
    }
    return 0;
}