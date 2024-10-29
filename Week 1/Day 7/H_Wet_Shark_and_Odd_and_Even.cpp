#include <bits/stdc++.h>
// #define endl '\n'
// typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int n;
    cin >> n;
    vector<long long int> even, odd;
    for (long long int i = 1; i <= n; i++)
    {
        long long int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    if (odd.size() % 2 != 0)
    {
        sort(odd.rbegin(), odd.rend());
        odd.pop_back();
    }
    long long int ans = 0;
    for (auto val : even)
        ans += val;
    for (auto val : odd)
        ans += val;
    cout<<ans<<endl;
    return 0;
}