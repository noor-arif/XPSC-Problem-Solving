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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        string s;
        cin >> s;

        map<int, int> like, dlike;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                dlike[v[i]] = i;
            else
                like[v[i]] = i;
        }

        int num = 1;
        for (auto it : dlike)
            v[it.second] = num++;

        for (auto it : like)
            v[it.second] = num++;

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";

        cout << '\n';
    }
    return 0;
}