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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto low = lower_bound(a.begin(), a.end(), x);
        auto up = upper_bound(a.begin(), a.end(), x);
        if (low == a.begin() and up == a.end())
            cout << "X X" << endl;
        else if (low == a.begin())
            cout << "X " << *up << endl;
        else if (up == a.end())
            cout << *--low << " X" << endl;
        else
            cout << *--low << " " << *up << endl;
    }
    return 0;
}