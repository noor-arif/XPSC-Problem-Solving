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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (a[n - 1] == 1)
    {
        cout << no << endl;
        return;
    }
    cout << yes << endl;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            if (i == 0 or a[i - 1] == 0)
                ans.push_back(0);
            else if (a[i - 1] == 1)
            {
                int cnt = 0, temp, j = i - 1, nxt;
                while (j >= 0 and a[j] == 1)
                {
                    cnt++;
                    nxt = j;
                    j--;
                }
                temp = cnt;
                while (cnt--)
                {
                    ans.push_back(0);
                }
                ans.push_back(temp);
                i = nxt + 1;
            }
        }
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
