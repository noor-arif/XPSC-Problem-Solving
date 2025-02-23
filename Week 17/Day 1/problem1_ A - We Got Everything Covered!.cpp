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
    char ch = 'a';
    string ans;
    for (int j = 0; j < k; j++)
    {
        ans.push_back(ch);
        ch++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans;
    }
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
