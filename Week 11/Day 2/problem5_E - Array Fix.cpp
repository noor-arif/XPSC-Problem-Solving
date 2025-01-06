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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cur = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (cur < v[i])
        {
            string s = to_string(v[i]);
            for (int j = s.size() - 1; j >= 0; j--)
            {
                if (s[j] - '0' <= cur)
                    cur = s[j] - '0';
                else
                {
                    cout << no << endl;
                    return;
                }
            }
        }
        else
            cur = v[i];
    }
    cout << yes << endl;
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
