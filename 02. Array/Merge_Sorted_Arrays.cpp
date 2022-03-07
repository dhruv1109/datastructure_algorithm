#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/merge-sorted-array/
// nums1 and nums2, sorted in non-decreasing order
// Go from the last indexes of both arrays, compare and put elements from either nums1 or nums2 to the final position

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{          
    cout<<" In function"<<endl;  
    int a=m-1;
    int b=n-1;
    int i=m+n-1;  // calculate the index of the last element of the merged array  

    // go from the back of nums1 and nums2 and compare and put the larger element to back of nums1
    while(a>=0 && b>=0)
    {
        if(nums1[a]>nums2[b])   
            nums1[i--]=nums1[a--];
        else            
            nums1[i--]=nums2[b--];
    }
    
    // if nums2 is longer than nums1 just copy the rest of nums2 to nums1 location, otherwise no need to do anything
    while(b>=0)         
        nums1[i--]=nums2[b--];


    cout<<" last function"<<endl; 

    for(auto i: nums1)
        cout<<i<<" ";
}

int main()
{
    int m,n;
    cin>>m,n;
    vector<int> v;
    vector<int> v2;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(0);
        v2.push_back(y);
    }
    merge(v,m,v2,n);
   

    return 0;
}