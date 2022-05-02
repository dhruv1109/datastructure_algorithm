// Sort Array By Parity
// https://leetcode.com/problems/sort-array-by-parity/

#include<bits/stdc++.h>
using namespace std;

 vector<int> sortArrayByParity(vector<int>& nums) 
 {
    int i=0;
    int n=nums.size();
    int j=nums.size()-1;
    while(i<j)
    {
        while(i<n && (nums[i]&1) == 0)
            i++;
        while(j>=0 && (nums[j]&1) == 1)
            j--;
        if(i<j)    
            swap(nums[i++],nums[j--]);
        else
            break;
    }
    return nums;
}