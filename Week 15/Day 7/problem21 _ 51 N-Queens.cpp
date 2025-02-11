#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> a;
    vector<vector<string>> ans;
    bool isValid(int n, int row, int col)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[row][i] == 'Q')
                return false;
            if (a[i][col] == 'Q')
                return false;
            if (row + i < n and col + i < n)
            {
                if (a[row + i][col + i] == 'Q')
                    return false;
            }
            if (row - i >= 0 and col - i >= 0)
            {
                if (a[row - i][col - i] == 'Q')
                    return false;
            }
            if (row + i < n and col - i >= 0)
            {
                if (a[row + i][col - i] == 'Q')
                    return false;
            }
            if (row - i >= 0 and col + i < n)
            {
                if (a[row - i][col + i] == 'Q')
                    return false;
            }
        }
        return true;
    }
    void f(int n, int r)
    {
        if (r == n)
        {
            ans.push_back(a);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (isValid(n, r, i))
            {
                a[r][i] = 'Q';
                f(n, r + 1);
                a[r][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        string s = "";
        for (int i = 0; i < n; i++)
            s.push_back('.');
        a = vector<string>(n, s);
        f(n, 0);
        return ans;
    }
};

int main()
{

    return 0;
}