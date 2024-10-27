#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }
    int cnt = 0;
    for(auto x:mp)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    
    
    return 0;
}