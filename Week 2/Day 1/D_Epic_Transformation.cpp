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
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> q;
        for (auto i : mp)
        {
            q.push(i.second);
        }
        while (q.size() >= 2)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            a--;
            b--;
            if (a)
                q.push(a);
            if (b)
                q.push(b);
        }
        if (q.size() == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << q.top() << '\n';
        }
    }
    return 0;
}