#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int zero = 0, nonZero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            zero++;
        else
            nonZero++;
    }

    if (zero == 0 || (zero - 1 <= nonZero))
        cout << 0 << '\n';
    else
    {
        int mx = *max_element(v.begin(), v.end());
        if (mx == 1)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }
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