#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26, 0);

    for (auto ch:s)
    {
        freq[ch-'a']++;
    }
    string ans = "";
    while(n!=0)
    {
        for(int i=0; i<26; i++)
        {
            if(freq[i]!=0)
            {
                ans += (char)(i+'a');
                freq[i]--;
                n--;
            }
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}