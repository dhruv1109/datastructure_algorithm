#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/search-in-rotated-sorted-array/

int pivot(vector<int>& nums)
{
    int s=0;
    int e=nums.size()-1;
    while(s<e)
    {
        int m=(s+e)/2;
        if(nums[m]>=nums[0])
            s=m+1;
        else
            e=m;
    }
    return s;
}
int binary(vector<int>& nums, int target,int start,int end)
{
    int s=start;
    int e=end;
    while(s<=e)
    {
        int m=(s+e)/2;
        if(nums[m]==target)
            return m;
        else if(nums[m]<target)
            s=m+1;
        else
            e=m-1;
    }
    return -1;
}
int search(vector<int>& nums, int target) 
{
    int p=pivot(nums);
    int n=nums.size()-1;
    if(target>=nums[p] && target<=nums[n])
        return binary(nums,target,p,n);
    else
        return binary(nums,target,0,p-1);
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
    int key;
    cin>>key;
    cout<<search(v,key);
}