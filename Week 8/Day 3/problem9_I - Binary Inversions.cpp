#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt0 = 0, cnt1 = 0, founNum1 = 0, first0 = -1;
    ll cntAnsWoutOp = 0, cntAnsWithOp = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            cnt0++;
            cntAnsWoutOp += founNum1;
            if (first0 == -1)
                first0 = i;
        }
        else
        {
            cnt1++;
            founNum1++;
        }
    }
    if (cnt0 == 0 or cnt1 == 0)
    {
        cout << n - 1 << '\n';
        return;
    }
    if (cnt0 != 0)
        v[first0] = 1;
    founNum1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            cntAnsWithOp += founNum1;
        }
        else
        {
            founNum1++;
        }
    }
    v[first0] = 0;
    int last1 = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            last1 = i;
            break;
        }
    }
    if (last1 != -1)
        v[last1] = 0;
    ll ansUp = 0;
    founNum1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ansUp += founNum1;
        }
        else
        {
            founNum1++;
        }
    }
    cout << max({cntAnsWithOp, cntAnsWoutOp, ansUp}) << '\n';
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