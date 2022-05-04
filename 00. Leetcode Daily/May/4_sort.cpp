// Max Number of K-Sum Pairs
// https://leetcode.com/problems/max-number-of-k-sum-pairs/

int maxOperations(vector<int>& nums, int k) 
{
    int i=0;
    int ans=0;
    int j=nums.size()-1;
    sort(nums.begin(),nums.end());
    while(i<j)
    {
        if(nums[i]+nums[j]==k)
        {
            ans++;
            i++;
            j--;
        }
        else if(nums[i]+nums[j]<k)
            i++;
        else
            j--;
    }
    return ans;   
}