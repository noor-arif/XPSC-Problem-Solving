#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void print(int n, vector<int> a)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m), ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    // print(n, a);
    // print(m, b);
    bool ok = false;
    int la = 0, lb = 0;
    while (la < n or lb < m)
    {
        if (la < n and a[la] <= k)
        {
            if (a[la] == 0)
                k++;
            ans.push_back(a[la]);
            la++;
        }
        else if (lb < m and b[lb] <= k)
        {
            if (b[lb] == 0)
                k++;

            ans.push_back(b[lb]);
            lb++;
        }
        else
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << -1;
    else
    {
        for (int val : ans)
            cout << val << " ";
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
