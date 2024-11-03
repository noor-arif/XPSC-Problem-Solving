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
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int len = sizeof(a)/sizeof(a[0]);
    sort(a, a+len);
    int k = 1;
    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=k)
        {
            k++;
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}