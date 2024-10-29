#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, t;
    int b;
    cin >> a >> b >> t;
    t = t + 0.5;
    int ans=0; 
    double j=1;
    for(auto i = a; i<=t; i = j*a)
    {
        ans = ans + b;
        j++;
    }
    cout<<ans;

    return 0;
}