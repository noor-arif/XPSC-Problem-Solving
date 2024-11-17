#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    vector<int> a;
    for (int i = 0, j = n; i < m; i += j)
    {
        a.push_back(b[i]);
        j--;
    }
    a.push_back(a.back());
    for (int val : a)
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