#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

int findMin(vector<int>& nums) 
{
    int s=0;
    int e=nums.size()-1;
    if(nums[s]<nums[e])
        return nums[s];
    while(s<e)
    {
        int m=(s+e)/2;
        if(nums[m]>=nums[0])
            s=m+1;
        else
            e=m;
    }
    return nums[s];
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