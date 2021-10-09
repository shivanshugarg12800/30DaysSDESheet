#include <bits/stdc++.h>
using namespace std;

long long int merge(long long int arr[], int s, int e)
{
    long long int mid = (s + e) / 2;
    long long int i = s;
    long long int j = mid + 1;
    long long int k = s;
    long long int temp = 500005;
    long long int brr[temp];
    long long count = 0;
    while (i <= mid and j <= e)
    {
        if (arr[i] <= arr[j])
        {
            brr[k++] = arr[i++];
        }
        else
        {
            brr[k++] = arr[j++];
            count += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        brr[k++] = arr[i++];
    }
    while (j <= e)
    {
        brr[k++] = arr[j++];
    }
    for (int x = s; x <= e; x++)
    {
        arr[x] = brr[x];
    }
    return count;
}
long long int inversionCountHelper(long long arr[], long long N, int s, int e)
{
    // base case
    if (s >= e)
        return 0;

    long long int mid = (s + e) / 2;
    // get the inversions count from first and second half
    long long int x = inversionCountHelper(arr, N, s, mid);
    long long int y = inversionCountHelper(arr, N, mid + 1, e);
    long long int z = merge(arr, s, e);

    return x + y + z;
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return inversionCountHelper(arr, N, 0, N - 1);
}