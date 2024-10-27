#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    int serejaScore = 0;
    int demaScore = 0;
    int l = 0;
    int r = n-1;
    bool serejaPic = true;
    while(l<=r)
    {
        if(v[l] > v[r])
        {
            if(serejaPic)
            {
                serejaScore += v[l];
            }
            else
            {
                demaScore += v[l];
            }
            l++;
        }
        else
        {
            if(serejaPic)
            {
                serejaScore += v[r];
            }
            else
            {
                demaScore += v[r];
            }
            r--;
        }
        serejaPic = !serejaPic;
    }

    cout<<serejaScore<<" "<<demaScore<<endl;
    return 0;
}