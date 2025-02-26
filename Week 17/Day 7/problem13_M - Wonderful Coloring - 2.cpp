#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a[n + 1];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        a[x].push_back(i);
    }
    vector<int> ans(n, 0), rem;
    for (auto [x, y] : mp)
    {
        if (y >= k)
        {
            int temp = k;
            for (auto idx : a[x])
            {
                if (temp == 0)
                    break;
                ans[idx] = temp;
                temp--;
            }
        }
        else
        {
            for (auto idx : a[x])
                rem.push_back(idx);
        }
    }
    int sz = rem.size() - (rem.size() % k);
    int temp = k;
    for (int i = 0; i < sz; i++)
    {
        if (temp == 0)
            temp = k;
        ans[rem[i]] = temp;
        temp--;
    }
    for (auto val : ans)
        cout << val << " ";
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
