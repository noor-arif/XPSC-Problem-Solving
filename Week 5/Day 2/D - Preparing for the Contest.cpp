#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    if (k == 0)
    {
        for (int i = n; i >= 1; i--)
        {
            v.push_back(i);
        }
    }
    else if (k == n - 1)
    {
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
    }
    else
    {
        int j = n;
        for (int i = 1; i <= k + 1; i++)
        {
            v.push_back(j);
            j--;
        }
        reverse(v.begin(), v.end());
        for (int i = 1; i <= n - k - 1; i++)
        {
            v.push_back(j);
            j--;
        }
    }
    for (auto val : v)
        cout << val << " ";
    cout << '\n';
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