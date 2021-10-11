#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{

    vector<int> ans;
    int n1 = 0, n2 = 0, c1 = 0, c2 = 0;
    for (auto it : nums)
    {
        if (it == n1)
            c1++;
        else if (it == n2)
            c2++;
        else if (c1 == 0)
        {
            c1 = 1;
            n1 = it;
        }
        else if (c2 == 0)
        {
            c2 = 1;
            n2 = it;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = 0, c2 = 0;
    for (auto it : nums)
    {
        if (it == n1)
            c1++;
        else if (it == n2)
            c2++;
    }
    if (c1 > (nums.size() / 3))
        ans.push_back(n1);
    if (c2 > (nums.size() / 3))
        ans.push_back(n2);

    return ans;
}