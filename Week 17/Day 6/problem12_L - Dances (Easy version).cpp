#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    a[0] = 1;
    for (int i = 1; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    list<int> mylist;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
        mylist.push_back(a[i]);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mylist.back() < b[i])
            break;
        if (mylist.front() < b[i])
            mylist.pop_front();
        else
        {
            mylist.pop_back();
            ans++;
        }
    }
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
