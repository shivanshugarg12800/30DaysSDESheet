#include <bits/stdc++.h>
using namespace std;
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;

    return gap / 2 + gap % 2;
}
void merge(int *arr1, int *arr2, int n, int m)
{
    // code here
    // we wil be using the gap method
    int N = n + m;
    int gap = N;
    int i, j;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
    {
        // check for the first array
        for (i = 0; i + gap < n; i++)
        {
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
        }
        // now check for the second array if i+gap becomes g> n
        for (j = gap > n ? gap - n : 0; i < n and j < m; i++, j++)
        {
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
        }
        // now the case when i==n and j < m
        if (j < m)
        {
            for (j = 0; j + gap < m; j++)
            {
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
            }
        }
    }
}

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        int arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";

        for (int i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}