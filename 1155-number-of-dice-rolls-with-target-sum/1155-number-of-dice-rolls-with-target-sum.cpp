class Solution {
public:
     unsigned long long int nWays(int n,int k,int target,vector<vector<unsigned long long>> &dp)
    {
        if(n==0&&target==0)
            return 1;
        if(n==0)
             return 0;
        if(dp[n][target]!=-1)
            return dp[n][target];
         unsigned long long int cnt{0};
        for(int i=1;i<=k;i++)
        {
            if(target>=i)
                cnt=(cnt+nWays(n-1,k,target-i,dp)%1000000007);
        }
        return dp[n][target]=(cnt);
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<unsigned long long>> dp(n+1,vector<unsigned long long>(target+1,-1));
        return nWays(n,k,target,dp)%1000000007;
    }
};