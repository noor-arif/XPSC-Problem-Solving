#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    bool flage = true;
    for (int i = 1; i <= 1000; i++)
    {
        if (a <= c * i && b >= c * i)
        {
            cout << c * i << endl;
            flage = false;
            break;
        }
    }
    if (flage)
        cout << -1;
    return 0;
}