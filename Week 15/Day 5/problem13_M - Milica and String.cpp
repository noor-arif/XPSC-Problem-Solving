#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            cnt++;
    }
    if (k == cnt)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    if (k == 0)
    {
        cout << n << " A" << endl;
        return;
    }
    if (cnt == 0)
    {
        cout << k << " B" << endl;
        return;
    }
    if (cnt > k)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                c++;
                if (c == (cnt - k))
                {
                    cout << i+1 << " A" << endl;
                    return;
                }
            }
        }
    }
    else
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                c++;
                if (c == (k - cnt))
                {
                    cout << i+1 << " B" << endl;
                    return;
                }
            }
        }
    }
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
