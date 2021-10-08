#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = 0;
    int currSum = 0;
    bool all_neg = true;
    int maxElement = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
            all_neg = false;

        if (nums[i] > maxElement)
            maxElement = nums[i];

        currSum += nums[i];
        if (currSum < 0)
            currSum = 0;

        maxSum = max(currSum, maxSum);
    }
    if (all_neg)
        return maxElement;

    return maxSum;
}
int main()
{
    int n;
    cin >> n;
    // vector<int> *nums = new vector<int>[n];
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << maxSubArray(nums) << endl;
}