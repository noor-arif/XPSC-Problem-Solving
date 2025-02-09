#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> cnt(10, 0), v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x % 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < min(cnt[i], 3); j++)
            v.push_back(i);
    }
    int m = v.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((v[i] + v[j] + v[k]) % 10 == 3)
                {
                    cout << yes << endl;
                    return;
                }
            }
        }
    }
    cout << no << endl;
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
