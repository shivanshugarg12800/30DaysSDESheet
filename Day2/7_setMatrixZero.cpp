#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    vector<pair<int, int>> pos;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
                pos.push_back({i, j});
        }
    }
    for (auto p : pos)
    {
        int x = p.first, y = p.second;
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[x][j] = 0;
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][y] = 0;
        }
    }
}