#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
     long long sum=0,max_sum=0;
    for(int i=0;i<n;i++)
    {
      if (sum < 0) 
      {
        sum = 0;
      }
      sum += arr[i];
      max_sum=max(max_sum,sum);
    }
    return max_sum;
}