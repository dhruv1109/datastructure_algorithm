#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/single-number/
// Every element appears twice except for one. Find that single one.

int singleNumber(vector<int>& nums) 
{
    int ans=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        ans=ans^nums[i];
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<singleNumber(v);
}