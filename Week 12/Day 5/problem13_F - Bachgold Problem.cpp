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
    cout << n / 2 << endl;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n / 2; i++)
            cout << 2 << " ";
        cout << endl;
    }
    else
    {
        for (int i = 1; i <= (n / 2) - 1; i++)
            cout << 2 << " ";
        cout << 3 << endl;
    }
    return 0;
}