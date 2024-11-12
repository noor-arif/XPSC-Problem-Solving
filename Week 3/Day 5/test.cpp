#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    map<int, int> mp;
    mp[4]++;
    mp[3]++;
    mp[4]++;
    cout<<mp.count(2)<<endl;
    if(mp.count(2)==0)
        cout<<"nai"<<endl;
    else
        cout<<"ase"<<endl;
    for(auto [x, y]:mp)
    {
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}