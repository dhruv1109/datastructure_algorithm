#include<bits/stdc++.h>
using namespace std;

//Approach-1 (Using O(n) space)

int pivotIndex(vector<int>& nums)
{        
    int n=nums.size();        
    vector<int> ltsum(n);
    vector<int> rtsum(n);
    ltsum[0]=nums[0];
    for(int i=1;i<n;i++)
    {
        ltsum[i]=ltsum[i-1]+nums[i];
    }
    rtsum[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rtsum[i]=rtsum[i+1]+nums[i];
    }

    for(int i=0;i<n;i++)
    {
        if(ltsum[i]==rtsum[i])
            return i;
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
    cout<<pivotIndex(v);
    
}