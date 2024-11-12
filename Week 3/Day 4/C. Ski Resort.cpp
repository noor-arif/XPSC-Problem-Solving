#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k, q;
        cin>>n>>k>>q;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans = 0, cons = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=q)
            {
                cons++;
                if(i==n-1 or a[i+1]>q)
                {
                    if(cons>=k)
                    {
                        ll x = cons - k + 1LL;
                        ll add = (x*(x+1LL))/2LL;
                        ans += add;
                    }
                    cons = 0;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}