#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices)
{
    int min_price=prices[0];
    int maxprofit=0;
    int cost=0;
    for(int i=1;i<prices.size();i++)
    {
        cost=prices[i]-min_price;
        maxprofit=max(maxprofit,cost);
        min_price=min(prices[i],min_price);
    }
    return maxprofit;
}