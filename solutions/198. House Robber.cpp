class Solution {
public:
    int bestRob(int s,int i,vector<vector<int>> &dp,vector<int> &nums)
    {
        if(i==nums.size()-1&&s==1)
        {
            return 0;
        }
        if(i==nums.size()-1&&s==0)
        {
            return nums[i];
        }
        if(dp[i+1][0]==-1||dp[i+1][1]==-1)
        {
           if(s==0)
          {
            dp[i+1][1]=nums[i]+bestRob(1,i+1,dp,nums);
            dp[i+1][0]=bestRob(0,i+1,dp,nums);
            return dp[i][0]=max(dp[i+1][1],dp[i+1][0]);
           }
           else
           {
              dp[i+1][0]=bestRob(0,i+1,dp,nums);
              return dp[i][1]=dp[i+1][0];
           }
        }
        
        return dp[i][s]=((s==1)? dp[i+1][0]:max(dp[i+1][1],dp[i+1][0]));
        
    }
    int rob(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(),vector<int>(2,-1));
        return bestRob(0,0,dp,nums);
        
    }
};
