#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
ll ans = LONG_LONG_MAX;
void AppleDivition(int n, ll sum1, ll sum2, vector<ll> v)
{
    if(n<0)
    {
        ans = min(ans, abs(sum1-sum2));
        return;
    }
    AppleDivition(n-1,sum1+v[n], sum2, v);
    AppleDivition(n-1, sum1, sum2+v[n], v);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    AppleDivition(n-1, 0, 0, v);
    cout<<ans<<endl;

    return 0;
}