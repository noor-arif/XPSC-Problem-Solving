#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int idx, int sum, vector<int> &c, int t, vector<int> &a, vector<vector<int>> &ans)
    {
        if (sum == t)
        {
            ans.push_back(a);
            return;
        }
        if (sum > t)
            return;
        for (int i = idx; i < c.size(); i++)
        {
            a.push_back(c[i]);
            f(i, sum + c[i], c, t, a, ans);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &c, int t)
    {
        sort(c.begin(), c.end());
        vector<vector<int>> ans;
        vector<int> a;
        f(0, 0, c, t, a, ans);
        return ans;
    }
};

int main()
{

    return 0;
}