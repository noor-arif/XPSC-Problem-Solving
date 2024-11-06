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
        int n, m, q;
        cin>>n>>m>>q;

        int t1, t2;
        cin>>t1>>t2;
        if(t1>t2)
            swap(t1, t2);
        
        int a;
        cin>>a;

        if(a<t1)
        {
            cout<<t1-1<<'\n';
        }
        else if(a>t2)
        {
            cout<<n-t2<<'\n';
        }
        else
        {
            int mid = (t1 + t2)/2;
            cout<<min(abs(mid-t1), abs(mid-t2))<<'\n';
        }

    }
    return 0;
}