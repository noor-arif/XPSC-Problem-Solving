#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string, int> mp;
    while(n--)
    {
        string s;
        cin>>s;
        if(mp[s] == 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        mp[s]++;
    }
    return 0;
}