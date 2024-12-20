#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            zero++;
        else if (v[i] == 1)
            one++;
    }
    cout << one * (1LL << zero);
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
        cout << endl;
    }
    return 0;
}
