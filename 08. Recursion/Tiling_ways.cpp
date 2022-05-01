// Ways To Tile A Floor
// https://practice.geeksforgeeks.org/problems/ways-to-tile-a-floor5836/1/#

// Recursive
long long numberOfWays(long long n) 
{
    if(n<=2)
        return n;
    
    return numberOfWays(n-1)+numberOfWays(n-2); 
}

// DP
long long numberOfWays(long long n) {
    int m=1e9+7;
    int dp[n + 2];
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] %m + dp[i - 2]%m)%m;
    }
    return dp[n];
}