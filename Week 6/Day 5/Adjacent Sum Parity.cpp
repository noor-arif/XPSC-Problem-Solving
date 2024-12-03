#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ans.push_back(1);
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            if (ans.back() == 1)
                ans.push_back(2);
            else
                ans.push_back(1);
        }
        else
        {
            if (ans.back() == 1)
                ans.push_back(1);
            else
                ans.push_back(2);
        }
    }
    if (ans.front() == ans.back())
        cout << "YES\n";
    else
        cout << "NO\n";
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