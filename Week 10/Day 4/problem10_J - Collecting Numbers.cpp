#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), pos(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
        pos[a[i]] = i;
    }
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (pos[i] < pos[i - 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}