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
        vector<int> v;
        for(int i = 1; i<=n; i++)
        {
            v.push_back(i);
        }
        queue<pair<int, int>> q;
        for(int i = 1; i<n; i++)
        {
            int a, b;
            a = v.back();
            v.pop_back();
            b = v.back();
            v.pop_back();
            int d = ceil(((a+b)*1.0/2));
            v.push_back(d);
            q.push({a, b});
        }
        cout<<v.back()<<'\n';
        while(!q.empty())
        {
            auto [a, b] = q.front();
            q.pop();
            cout<<a<<" "<<b<<'\n';
        }
    }
    return 0;
}