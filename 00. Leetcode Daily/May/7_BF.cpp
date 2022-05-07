// 132 pattern
// https://leetcode.com/problems/132-pattern/

// Brute force o(n^3)
 
bool find132pattern(vector<int>& nums) {
    
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                if(nums[k] > nums[i] && nums[j] > nums[k]) 
                    return true;
            }
        }
    }
    return false;    
}