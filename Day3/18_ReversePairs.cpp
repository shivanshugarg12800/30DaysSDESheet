#include <bits/stdc++.h>
using namespace std;

int mergeHelper(vector<int> &nums, int si, int ei)
{
    if (si >= ei)
        return 0;
    int mid = (si + ei) / 2;
    int ans = mergeHelper(nums, si, mid);
    ans += mergeHelper(nums, mid + 1, ei);
    ans += merge(nums, si, ei);

    return ans;
}

int merge(vector<int> &nums, int si, int ei)
{
    int mid = (si + ei) / 2;
    int j = mid + 1;
    int count = 0;
    for (int i = si; i <= mid; i++)
    {
        while (j <= ei and nums[i] > 2ll * nums[j])
        {
            j++;
        }
        count += j - (mid + 1);
    }
    vector<int> temp;
    int i = si;
    j = mid + 1;
    while (i <= mid and j <= ei)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i++]);
        }
        else
        {
            temp.push_back(nums[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(nums[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(nums[j++]);
    }

    for (i = si; i <= ei; i++)
    {
        nums[i] = temp[i - si];
    }
    return count;
}

int reversePairs(vector<int> &nums)
{
    return mergeHelper(nums, 0, nums.size() - 1);
}