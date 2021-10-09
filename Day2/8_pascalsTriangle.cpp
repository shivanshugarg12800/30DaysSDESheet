#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    vector<int> prev;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> rows;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 or j == i)
                rows.push_back(1);
            else
            {
                rows.push_back(prev[j] + prev[j - 1]);
            }
        }
        prev = rows;
        ans.push_back(rows);
    }
    return ans;
}