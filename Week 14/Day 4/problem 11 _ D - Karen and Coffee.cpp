#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> d(2e5 + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    for (int i = 1; i < d.size(); i++)
        d[i] = d[i - 1] + d[i];

    vector<int> req(2e5 + 2);
    int j = 0;
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] >= k)
        {
            j++;
        }
        req[i] = j;
    }

    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << req[b] - req[a - 1] << endl;
    }
    return 0;
}