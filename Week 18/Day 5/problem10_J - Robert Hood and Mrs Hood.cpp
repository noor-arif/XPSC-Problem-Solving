#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
void Solve()
{
    int n, d, k;
    cin >> n >> d >> k;
    vector<pair<int, int>> jobs(n + 1, {0, 0});
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        jobs[l].first++;
        jobs[r].second++;
    }
    int l = 1, r = 1, totalJobs = 0, jobBro = INT_MIN, jobMom = INT_MAX, bro, mom;
    while (r <= n)
    {
        if (r - l + 1 == d)
        {
            if (totalJobs > jobBro)
            {
                jobBro = totalJobs;
                bro = l;
            }
            if (totalJobs < jobMom)
            {
                jobMom = totalJobs;
                mom = l;
            }
            totalJobs -= jobs[l].second;
            l++;
            r++;
            totalJobs += jobs[r].first;
        }
        else
        {
            totalJobs += jobs[r].first;
            r++;
        }
    }
    cout << bro << " " << mom << endl;
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
    }
    return 0;
}
