#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x] = i;
    }
    // if(mp.find(8)) cout<<"Yes\n";
    // else cout<<"NO\n";
    for(auto val:mp)
    {
        cout<<val.first<<" "<<val.second<<'\n';
    }
    return 0;
}