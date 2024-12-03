#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        int n = s.size();

        if (s[0] == '+' || s[n - 1] == '+')
            x++;
        else
            x--;
    }
    cout << x << '\n';
    return 0;
}