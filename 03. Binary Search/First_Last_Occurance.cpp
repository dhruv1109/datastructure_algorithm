#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

int first(vector<int>& nums, int target)
{
    int l=0,ans=-1;
    int h=nums.size()-1;
       
    while(l<=h)
    {
    int m=(l+h)/2;
    if(nums[m]==target)
    {
        ans=m;
        h=m-1;
        }
        else if(nums[m]<target)
        l=m+1;
        else
        h=m-1;
    }
    return ans;        
}

int last(vector<int>& nums, int target)
{
    int l=0,ans=-1;
    int h=nums.size()-1;
       
    while(l<=h)
    {
    int m=(l+h)/2;
    if(nums[m]==target)
    {
        ans=m;
        l=m+1;
        }
        else if(nums[m]<target)
        l=m+1;
        else
        h=m-1;
    }
    return ans;        
}

vector<int> searchRange(vector<int>& nums, int target) 
{
    vector<int> ans;
    int a=first(nums,target);
    ans.push_back(a);
    if(a==-1)
        ans.push_back(-1);
    else
        ans.push_back(last(nums,target));
        
    return ans;
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
    vector<int>ans=searchRange(v,key);
    for(auto i:ans)
        cout<<i<<" ";
}