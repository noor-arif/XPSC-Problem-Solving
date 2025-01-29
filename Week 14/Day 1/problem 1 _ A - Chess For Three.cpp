#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    priority_queue<int> pq;
    for (int i = 1; i <= 3; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            pq.push(x);
    }
    int cnt = 0;
    while (pq.size() >= 2)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        a--, b--;
        cnt++;
        if (a > 0)
        {
            pq.push(a);
        }
        if (b > 0)
        {
            pq.push(b);
        }
    }
    if (pq.size() > 0 and pq.top() % 2 == 1)
        cout << -1 << endl;
    else
        cout << cnt << endl;
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
