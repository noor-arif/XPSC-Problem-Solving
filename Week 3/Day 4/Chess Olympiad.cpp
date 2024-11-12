#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    float a = x + 0.5 * y;
    float b = z + 0.5 * y;
    int rg = 4 - (x + y + z);

    if (a + rg > b)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}