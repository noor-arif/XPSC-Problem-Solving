#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int pstvS1 = 0, pstvS2 = 0, unrS2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '+')
            pstvS1++;
        if (s2[i] == '+')
            pstvS2++;
        if (s2[i] == '?')
            unrS2++;
    }

    int cnt = 0;
    for (int i = 0; i < (1 << unrS2); i++)
    {
        if (__builtin_popcount(i) + pstvS2 == pstvS1)
            cnt++;
    }

    double ans = (cnt * 1.0 / (1 << unrS2));
    cout << fixed << setprecision(12) << ans << '\n';
    return 0;
}