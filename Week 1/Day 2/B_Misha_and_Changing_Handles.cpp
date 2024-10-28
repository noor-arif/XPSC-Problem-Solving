#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<string, string> mp;
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        bool chack = false;
        for(auto p:mp)
        {
            if(p.second == s1)
            {
                mp[p.first] = s2;
                chack = true;
            }
        }

        if(!chack)
        {
            mp[s1] = s2;
        }
    }

    cout<<mp.size()<<endl;
    for(auto p:mp)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}