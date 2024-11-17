#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (x - y >= 18)
        cout << "RCB";
    else
        cout << "CSK";
    return 0;
}