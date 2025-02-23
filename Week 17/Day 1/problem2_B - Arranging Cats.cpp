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
    string s, f;
    cin >> s >> f;
    int cis = 0, cif = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cis++;
        if (f[i] == '1')
            cif++;
    }
    int dif = abs(cis - cif);
    int ans = dif;
    if (cis > cif)
    {
        for (int i = 0; i < n and dif > 0; i++)
        {
            if (f[i] == '0' and s[i] == '1')
            {
                s[i] = '0';
                dif--;
            }
        }
    }
    else if (cis < cif)
    {
        for (int i = 0; i < n and dif > 0; i++)
        {
            if (f[i] == '1' and s[i] == '0')
            {
                s[i] = '1';
                dif--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != f[i])
            dif++;
    }
    ans += dif / 2;
    cout << ans << endl;
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
