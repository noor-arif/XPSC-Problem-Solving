#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n + 1);
    ll totalSum = (n * (n + 1)) / 2, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        currSum += v[i];
    }
    v[n] = totalSum - currSum;
    k = k % (n + 1);
    for (int i = 0; i < n; i++)
        cout << v[(i - k + n + 1) % (n + 1)] << " ";
    cout << '\n';
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