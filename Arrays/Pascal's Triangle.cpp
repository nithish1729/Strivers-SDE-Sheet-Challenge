#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  for(int i=0;i<n;i++)
  {
    vector<long long int> temp(i+1,0);
    for(int j=0;j<temp.size();j++)
    {
      int n=temp.size();
      if (j == 0 || j==n-1) 
      {
        temp[j] = 1;
      }
      else
      {
        temp[j]=ans[i-1][j-1]+ans[i-1][j];
      }
    }
    ans.push_back(temp);
  }
  return ans;
}
