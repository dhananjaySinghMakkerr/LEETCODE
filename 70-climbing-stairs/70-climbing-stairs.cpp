class Solution {
public:
    int cS(int n,vector<int> &dp)
    {
         if(n==0||n==1)
            return dp[n]=1;
          if(dp[n]!=-1)
              return dp[n];
         return dp[n]=cS(n-1,dp)+cS(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        
        cS(n,dp);
        return dp[n];
    }
};