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
        string s;
        cin>>s;
        if(s=="bca" || s == "cab")
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}