#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        if (ms.size() == 0)
            ms.insert(v[i]);
        else
        {
            auto it = ms.upper_bound(v[i]);
            if (it != ms.end())
                ms.erase(it);
            ms.insert(v[i]);
        }
    }
    cout << ms.size() << endl;

    return 0;
}