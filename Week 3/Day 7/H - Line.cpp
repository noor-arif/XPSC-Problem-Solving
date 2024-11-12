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
        string s;
        cin >> s;
        vector<ll> dis;
        ll total = 0;
        int minchange = 0;
        for (int i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    minchange++;
                    total += R;
                    dis.push_back(R - L);
                }
                else
                    total += L;
            }
            else
            {
                if (L > R)
                {
                    minchange++;
                    total += L;
                    dis.push_back(L - R);
                }
                else
                    total += R;
            }
        }
        vector<ll> ans(n + 1);
        for (int i = minchange; i <= n; i++)
        {
            ans[i] = total;
        }
        sort(dis.begin(), dis.end(), greater<ll>());
        for (int i = minchange - 1; i >= 1; i--)
        {
            total -= dis.back();
            dis.pop_back();
            ans[i] = total;
        }
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    return 0;
}