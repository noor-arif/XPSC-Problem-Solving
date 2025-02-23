#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    queue<int> q;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ok = true;
        if (s[i] == '0' and ok)
        {
            q.push(i);
        }
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cout << 0 << " ";
        else
        {
            if (!q.empty())
            {
                int idx = q.front();
                q.pop();
                sum += (idx - i);
                cout << sum << " ";
                s[idx] = '1';
            }
            else
                cout << -1 << " ";
        }
    }
    cout << endl;
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
