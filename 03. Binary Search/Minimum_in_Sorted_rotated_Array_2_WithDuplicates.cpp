#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
//Duplicates also

int findMin(vector<int>& nums) 
{
    int l = 0, r = nums.size()-1;
    while(l < r){
        int mid = l + (r-l)/2;
        if(nums[mid] > nums[r]) l = mid+1;
        else if(nums[mid] < nums[r]) r = mid;
        else r--;
    }
    return nums[l];
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<findMin(v);
}