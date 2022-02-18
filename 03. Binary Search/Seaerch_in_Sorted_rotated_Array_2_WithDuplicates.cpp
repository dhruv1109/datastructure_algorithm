#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
//Duplicates also

 bool search(vector<int>& nums, int target) 
 {        
    //Mostly in Log(n) except cases where left=mid= right where we dont know in which part we ened to serch   
    int l=0, r = nums.size()-1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return true;
        if( (nums[l] == nums[mid]) && (nums[r] == nums[mid])) {l++; r--;}
        else if(nums[l] <= nums[mid]){
            if((nums[l] <= target) && (nums[mid] > target)) r = mid-1;
            else l = mid + 1;
        } else {
            if((nums[mid] < target) && (nums[r] >= target)) l = mid + 1;
            else r = mid-1;
        }
    }
    return false;
    
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