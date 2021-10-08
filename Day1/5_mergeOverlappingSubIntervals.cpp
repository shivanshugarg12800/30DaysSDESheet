#include <bits/stdc++.h>
using namespace std;

static bool cmp(vector<int> a, vector<int> b)
{
    return a[0] < b[0];
}

vector<vector<int>> merge(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end(), cmp);
    vector<vector<int>> ans;
    int f = nums[0][0];
    int s = nums[0][1];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i][0] >= f and nums[i][0] <= s)
        {
            s = max(s, nums[i][1]);
        }
        else
        {
            ans.push_back({f, s});
            f = nums[i][0];
            s = nums[i][1];
        }
    }
    ans.push_back({f, s});

    return ans;
}