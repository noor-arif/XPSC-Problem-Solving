#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin>>n>>m;
    vector<int> v;
    for(int i=1; i<=n+m; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int val:v)
        cout<<val<<" ";
    return 0;
}