#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 1;
    int max = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == max)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                max = nums[i];
                count++;
            }
        }
    }
    return max;
}