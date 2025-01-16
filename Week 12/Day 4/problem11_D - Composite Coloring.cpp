#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    vector<int> allPrime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (a[i] % allPrime[j] == 0)
            {
                mp[allPrime[j]].push_back(i);
                break;
            }
        }
    }

    vector<int> ans(n);
    int color = 1;
    for (auto [x, y] : mp)
    {
        for (auto pos : y)
            ans[pos] = color;
        color++;
    }

    cout << mp.size() << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
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
