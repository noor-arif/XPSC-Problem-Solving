#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val = a[i], j = 1;
        while (val / k != 0 && j <= 3)
        {
            ans += k;
            val -= k;
            j++;
        }
    }
    cout << sum - ans << '\n';
    return 0;
}