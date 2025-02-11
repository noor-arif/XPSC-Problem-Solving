#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int idx, vector<int> &nums, vector<int> &a, vector<vector<int>> &ans)
    {
        ans.push_back(a);
        for (int i = idx; i < nums.size(); i++)
        {
            if (i > idx and nums[i] == nums[i - 1])
                continue;
            a.push_back(nums[i]);
            f(i + 1, nums, a, ans);
            a.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> a;
        f(0, nums, a, ans);
        return ans;
    }
};

int main()
{

    return 0;
}