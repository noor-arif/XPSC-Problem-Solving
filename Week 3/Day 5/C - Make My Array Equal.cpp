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
        int n;
        cin >> n;
        ll a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                m[a[i]]++;
            }
        }

        if (m.size() == 1 || m.size() == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}