#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
vector<int> a;
bool check(int n, int m)
{
    for (int i = n; i < m; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
void Solve()
{
    int n;
    cin >> n;
    a.clear();
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n < 4)
    {
        cout << yes << endl;
        return;
    }
    if (n == 4)
    {
        if (check(2, 3))
            cout << yes << endl;
        else
            cout << no << endl;
    }
    else if (n <= 8)
    {
        if (check(2, 3) and check(4, n - 1))
            cout << yes << endl;
        else
            cout << no << endl;
    }
    else if (n <= 16)
    {
        if (check(2, 3) and check(4, 7) and check(8, n - 1))
            cout << yes << endl;
        else
            cout << no << endl;
    }
    else
    {
        if (check(2, 3) and check(4, 7) and check(8, 15) and check(16, n - 1))
            cout << yes << endl;
        else
            cout << no << endl;
    }
    
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
