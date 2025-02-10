#include<bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool isVowel(char ch)
{
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s, t;
    cin>>s>>t;
    if(s.size()!=t.size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if((isVowel(s[i]) and isVowel(t[i])) or (isVowel(s[i]) == false and isVowel(t[i])==false))
        {
            continue;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}