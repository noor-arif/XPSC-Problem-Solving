#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long int ll;
void Solve()
{
    vector<string> mat(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> mat[i];
    }
    cout<<endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
           cout<<mat[j][i];
        }
        cout<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
        cout << endl;
    }
    return 0;
}