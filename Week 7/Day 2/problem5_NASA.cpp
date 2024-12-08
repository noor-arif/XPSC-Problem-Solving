#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int maxN = (1LL << 15);
vector<int> allPalindrom;
bool isPalindrom(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}
void markPlindrom()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrom(i))
            allPalindrom.push_back(i);
    }
}
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindrom.size(); j++)
        {
            int curr = (a[i] ^ allPalindrom[j]);
            ans += cnt[curr];
        }
    }
    cout << ans / 2 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    markPlindrom();
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }

    return 0;
}