// Max Number of K-Sum Pairs
// https://leetcode.com/problems/max-number-of-k-sum-pairs/

 int maxOperations(vector<int>& nums, int k) 
 {  
    unordered_map<int, int> m;
    int ans = 0;
    for (int x : nums) 
    {
        if (m[k - x] > 0) 
        {
            ans += 1;
            m[k - x] --;
        } else 
            m[x] ++;  
    }
    return ans;
}