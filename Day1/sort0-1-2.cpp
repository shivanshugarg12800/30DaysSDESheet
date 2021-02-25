//in this problem we have to sort an array using no extra space which contains the colors 0-1-2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortColors(vector<int> &nums)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int mini = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[mini])
                mini = j;
        }
        swap(&nums[i], &nums[mini]);
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