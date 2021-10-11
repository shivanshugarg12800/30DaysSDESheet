// ---------------------LEETCODE---------------
bool searchMatrix(vector<vector<int>> &mat, int X)
{
    int i = 0, j = mat[0].size() - 1;
    // we will make use of the fact that each column and row is sorted
    // if the current number is less than the target we increment the row
    // else if number is greater than the target we decrement in column.

    bool found = false;
    while (i < mat.size() and j >= 0)
    {
        if (mat[i][j] == X)
            found = true;
        if (mat[i][j] < X)
            i++;
        else
            j--;
    }
    return found;
}

// ---------------------GEEKSFORGEEKS---------------------------
int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    // your code here
    int i = 0, j = M - 1;
    // we will make use of the fact that each column and row is sorted
    // if the current number is less than the target we increment the row
    // else if number is greater than the target we decrement in column.

    bool found = false;
    while (i < N and j >= 0)
    {
        if (mat[i][j] == X)
            found = true;
        if (mat[i][j] < X)
            i++;
        else
            j--;
    }
    return (found == true ? 1 : 0);
}
