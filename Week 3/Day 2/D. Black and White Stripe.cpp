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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0, r=0;
        int ans = INT_MAX, cur=0;
        while(r<n)
        {
            if(s[r]=='W')
                cur++;
            if(r-l+1 == k)
            {
                ans = min(ans, cur);
                if(s[l]=='W')
                    cur--;
                l++;
            }
            r++;
        }

        cout<<ans<<'\n';
    }
    return 0;
}