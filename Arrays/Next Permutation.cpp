#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    // first find out index point 
    int ind=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            ind=i;
            break;
        }
    }
    if(ind==-1)
    {
         reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    // next swap the smallest element with the index point
    for(int i=n-1;i>ind;i--)
    {
        if(permutation[i]>permutation[ind])
        {
            swap(permutation[i],permutation[ind]);
            break;
        }
    }
    //  reverse the part after index point
    reverse(permutation.begin() + ind + 1, permutation.end());

    return permutation;

}