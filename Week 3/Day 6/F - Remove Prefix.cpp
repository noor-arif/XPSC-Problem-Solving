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
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> mp;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = a[i];
            if (mp.count(x) != 0)
                break;
            mp[x]++;
            b.push_back(x);
        }
        cout << a.size() - b.size() << '\n';
    }
    return 0;
}