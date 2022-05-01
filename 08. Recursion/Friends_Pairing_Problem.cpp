// Friends Pairing Problem
// https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1#


// Recursive 
int countFriendsPairings(int n) 
{ 
    if(n<=2) 
        return n;
    return countFriendsPairings(n-1)+ (n-1)*countFriendsPairings(n-2);
}

// DP
int countFriendsPairings(int n) 
{ 
        int m=1e9+7;
        long long int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for (long long int i = 2; i <= n; i++) 
        {
            dp[i] = ((dp[i - 1]%m) + (((i - 1) * dp[i - 2])%m))%m;
        }
        return dp[n];
}
