#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minCost = 1e9;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minCost)
        {
            minCost = prices[i];
        }
        else
        {
            profit = max((prices[i] - minCost), profit);
        }
    }
    return profit;
}