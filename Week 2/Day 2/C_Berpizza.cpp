#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q, indx1 = 0, indx2 = 0;
    cin >> q;
    priority_queue<pair<int, int>> pq;
    vector<bool> v;
    while (q--)
    {
        int input;
        cin >> input;
        if (input == 1)
        {
            int m;
            cin >> m;
            pq.push({m, -indx1});
            indx1++;
            v.push_back(false);
        }
        else if (input == 2)
        {
            while (v[indx2])
            {
                indx2++;
            }
            v[indx2] = true;
            cout << indx2 + 1 << " ";
        }
        else if (input == 3)
        {
            while (v[-pq.top().second])
            {
                pq.pop();
            }
            cout << -pq.top().second + 1 << " ";
            v[-pq.top().second] = true;
            pq.pop();
        }
    }
    return 0;
}