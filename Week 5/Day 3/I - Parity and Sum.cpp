#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> odd, even;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    int ne = even.size(), no = odd.size();
    if (ne == 0 || no == 0)
    {
        cout << 0 << '\n';
        return;
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    if (odd[no - 1] > even[ne - 1])
    {
        cout << ne << '\n';
        return;
    }
    if (odd[no - 1] < even[0])
    {
        cout << ne + 1 << '\n';
        return;
    }
    ll sum = odd[no - 1] + even[0];
    for (int i = 1; i < ne; i++)
    {
        if (sum < even[i])
        {
            cout << ne + 1 << '\n';
            return;
        }
        sum += even[i];
    }
    cout << ne << '\n';
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