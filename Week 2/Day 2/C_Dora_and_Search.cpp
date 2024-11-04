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
        int n;
        cin>>n;
        int a[n+5];
        set<int> st;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            st.insert(i);
        }
        int l = 1, r = n;
        bool flage;
        while(1)
        {
            int mn = *st.begin();
            int mx = *st.rbegin();
            flage = false;
            if(mn == a[l] or mx == a[l])
            {
                st.erase(a[l]);
                l++;
                flage = true;
            }
            if(mn == a[r] or mx == a[r])
            {
                st.erase(a[r]);
                r--;
                flage = true;
            }
            if(flage == false or l>r) break;
        }
        if(l>r) cout<<-1<<'\n';
        else cout<<l<<" "<<r<<'\n';
        
    }
    return 0;
}