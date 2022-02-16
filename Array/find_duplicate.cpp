#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-the-duplicate-number/

int findDuplicate(vector<int>& nums) 
{    
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int idx=abs(nums[i])-1;
        if(nums[idx]<0)
        {
            return idx+1;
        }
        nums[idx]=-nums[idx];
    }
        
    return 0;
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
    cout<<findDuplicate(v);
}