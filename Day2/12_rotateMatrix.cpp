#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int j = matrix.size() - 1;
    int i = 0;
    while (i < j)
    {
        swap(matrix[i], matrix[j]);
        i++;
        j--;
    }
    for (i = 0; i < matrix.size(); i++)
    {
        for (j = 0; j < matrix.size(); j++)
        {
            if (i < j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
}