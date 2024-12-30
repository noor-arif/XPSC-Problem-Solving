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

    int x, n;
    cin >> x >> n;
    set<int> s;
    multiset<int> ms;
    s.insert(0);
    s.insert(x);
    ms.insert(x - 0);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
        auto it = s.find(val);
        int prev_val = *prev(it), next_val = *next(it);
        ms.erase(ms.find(next_val - prev_val));
        ms.insert(val - prev_val);
        ms.insert(next_val - val);
        cout << *ms.rbegin() << " ";
    }
    cout << endl;
    return 0;
}