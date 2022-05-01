//  Subsets
//  https://leetcode.com/problems/subsets/

// for each no , either include or exclude

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,vector<int> output,int idx,vector<vector<int>>& ans)
{
    if(idx>nums.size()-1)
    {
        ans.push_back(output);
        return;
    }
    //exclude -> dont do anything, just move i
    solve(nums,output,idx+1,ans);
    //include
    output.push_back(nums[idx]);
    solve(nums,output,idx+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int idx=0;
    solve(nums,output,idx,ans);
    return ans;
}

int main()
{
    vector<int> nums;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<vector<int>> ans;
    ans=subsets(nums);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }

}