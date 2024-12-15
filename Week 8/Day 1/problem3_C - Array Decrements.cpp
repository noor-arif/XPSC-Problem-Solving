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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int mx = 0;
        map<int, int> mp;
        bool flage = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                flage = true;
            else
            {
                if (b[i] == 0)
                    mx = max(mx, a[i]);
                else
                    mp[a[i] - b[i]]++;
            }
        }

        int x = -1;
        for (auto it : mp)
            x = it.first;
        if (mp.size() > 1)
            flage = true;
        if (x != -1 && mx > x)
            flage = true;
        if (flage)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}