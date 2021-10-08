int *findTwoElement(int *arr, int n)
{
    // code here
    int sum = (n * (n + 1)) / 2;
    int sumSq = (n * (n + 1) * (2 * n + 1)) / 6;
    // cout<<sum<<sumSq<<endl;
    int sum2 = 0;
    int sum2Sq = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];
        sum2Sq += (arr[i] * arr[i]);
    }
    // cout<<sum2<<sum2Sq<<endl;
    int x_y = abs(sum - sum2);
    int x2_y2 = abs(sumSq - sum2Sq);
    int xPlusy = x2_y2 / x_y;

    int a = (xPlusy + x_y) / 2;
    int b = xPlusy - a;

    int *brr = new int[2];
    brr[0] = min(a, b);
    brr[1] = max(a, b);

    return brr;
}