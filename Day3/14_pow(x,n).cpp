#include <bits/stdc++.>
using namespace std;
double pow(double x, long long n)
{
    if (n == 0)
        return 1.00000;
    if (n == 1)
        return x;

    double prod = 1.00;
    while (n)
    {
        if (n & 1)
        {
            prod *= x;
            n--;
        }
        else
        {
            x = x * x;
            n >>= 1;
        }
    }
    return prod;
}

double myPow(double x, int n)
{
    if (n == 0)
        return 1.00000;
    if (n == 1 or x == 1.00000)
        return x;

    long long num = abs(n);
    double ans = pow(x, num);
    if (n < 0)
        return (double)1.0000 / ans;

    return ans;
}