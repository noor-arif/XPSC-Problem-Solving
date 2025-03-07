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
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    set<int> st[n + 1];
    for (int i = 1; i <= n; i++)
        st[i].insert(i);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '1')
                st[j + 1].insert(i + 1);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << st[i].size() << " ";
        for (int x : st[i])
            cout << x << " ";
        cout << endl;
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
