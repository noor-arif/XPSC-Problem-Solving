#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int idx, int sum, vector<int> &a, vector<vector<int>> &ans, vector<int> &c, int t)
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
            if (i > idx and c[i] == c[i - 1])
                continue;
            a.push_back(c[i]);
            f(i + 1, sum + c[i], a, ans, c, t);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &c, int t)
    {
        sort(c.begin(), c.end());
        vector<int> a;
        vector<vector<int>> ans;
        f(0, 0, a, ans, c, t);
        return ans;
    }
};

int main()
{

    return 0;
}