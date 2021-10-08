//in this problem we have to sort an array using no extra space which contains the colors 0-1-2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    int one = 0;
    int two = 0;
    for (auto x : nums)
        if (x == 1)
            one++;
        else if (x == 2)
            two++;
    int zero = nums.size() - one - two;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i < zero)
            nums[i] = 0;
        else if (i >= zero and i < (zero + one))
            nums[i] = 1;
        else
            nums[i] = 2;
    }
}
int main()
{
    int n;
    cin >> n;
    // vector<int> *nums = new vector<int>[n];
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sortColors(nums);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}