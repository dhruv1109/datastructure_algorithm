#include<bits/stdc++.h>
using namespace std;

//Approach-2 (Using O(1) space)

int findMiddleIndex(vector<int>& nums) {
    int totalsum=0,leftsum=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
        totalsum+=nums[i];
    
    for(int i=0;i<n;i++)
    {
        totalsum-=nums[i];
        if(totalsum==leftsum)
            return i;
        
        leftsum+=nums[i];
    }        
    return -1;
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
    cout<<findMiddleIndex(v);
    
}