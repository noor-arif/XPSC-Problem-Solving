#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin>>n>>x;
    list<int> l;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }

    l.remove(x);

    for(int val:l)
        cout<<val<<" ";
    return 0;
}