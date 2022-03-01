#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/summary-ranges/
// nums = [0,2,3,4,6,8,9]
// Output: ["0","2->4","6","8->9"]

vector<string> summaryRanges(vector<int>& nums) 
{
    vector<string> ans;
    int n=nums.size();
    if(n<1)
    {
        return ans;
    }
    int i=0;
    while(i<n)
    {
        int s=i,e=i;
        while(e+1<n && nums[e] + 1==nums[e+1]){
            e++;
        }            
        if(s<e)
        {
            ans.push_back(to_string(nums[s]) + "->" + to_string(nums[e]));
        }
        else
        {
            ans.push_back(to_string(nums[s]));
        }
        
        i=e+1;
        }
        return ans;
}


int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    vector<string> ans;
    ans=summaryRanges(nums);
    for(auto s: ans)
    cout<<s<<" ";

    return 0;

}