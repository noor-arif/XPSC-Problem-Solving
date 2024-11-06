#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> t(m);
        for (int i = 0; i < m; i++)
        {
            cin >> t[i];
        }
        sort(t.begin(), t.end());

        while (q--)
        {
            int d;
            cin >> d;

            if (d < t[0])
            {
                cout << t[0] - 1 << '\n';
            }
            else if (d > t[m - 1])
            {
                cout << n - t[m - 1] << '\n';
            }
            else
            {
                auto it = lower_bound(t.begin(), t.end(), d);
                int rt = *it;
                it--;
                int lt = *it;
                int mid = (lt + rt) / 2;
                cout << min(abs(mid - lt), abs(mid - rt)) << '\n';
            }
        }
    }
    return 0;
}