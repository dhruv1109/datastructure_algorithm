// Count Good Meals
// https://leetcode.com/problems/count-good-meals/

int countPairs(vector<int>& deliciousness) 
{   
    int ans = 0;
    unordered_map<int, int> m;
    int mod = 1e9+7;
    for (int x : deliciousness) 
    {
        //2^0 to 2^22
        for (int i = 0; i < 22; i++) 
        {
            if(m[(1 << i) - x] > 0)
                ans+=(m[(1 << i) - x]);
            
            ans %= mod;
        }
        m[x]++;
    }
    return ans;
}