#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void Solve()
{
    int dsa_dragon, toc_dragon, dm_dragon;
    cin >> dsa_dragon >> toc_dragon >> dm_dragon;
    int dsa_sloth, toc_sloth, dm_sloth;
    cin >> dsa_sloth >> toc_sloth >> dm_sloth;
    int total_dragon = dsa_dragon + toc_dragon + dm_dragon;
    int total_sloth = dsa_sloth + toc_sloth + dm_sloth;
    if (total_dragon != total_sloth)
    {
        if (total_dragon > total_sloth)
            cout << "DRAGON\n";
        else
            cout << "SLOTH\n";
    }
    else
    {
        if (dsa_dragon != dsa_sloth)
        {
            if (dsa_dragon > dsa_sloth)
                cout << "DRAGON\n";
            else
                cout << "SLOTH\n";
        }
        else
        {
            if (toc_dragon != toc_sloth)
            {
                if (toc_dragon > toc_sloth)
                    cout << "DRAGON\n";
                else
                    cout << "SLOTH\n";
            }
            else
            {
                if (dm_dragon != dm_sloth)
                {
                    if (dm_dragon > dm_sloth)
                        cout << "DRAGON\n";
                    else
                        cout << "SLOTH\n";
                }
                else
                    cout << "TIE\n";
            }
        }
    }
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