#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        v.push_back(cnt);
    }
    sort(v.rbegin(), v.rend());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == 0)
            v.pop_back();
    }
    bool flage = true; // square
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            flage = false; //TRIANGLE
            break;
        }
    }
    if (flage)
        cout << "SQUARE\n";
    else
        cout << "TRIANGLE\n";
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