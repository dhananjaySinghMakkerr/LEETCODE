class Solution {
public:
    int uPWO(int i,int j,int m,int n,vector<vector<int>> &dp,vector<vector<int>> &obs)
    {
        if(i==m-1&&j==n-1&&!obs[i][j])
        {
            return 1;
        }
        if(i>m-1||j>n-1)
        {
            return 0;
        }
        if(obs[i][j]==1)
        {
            return 0;
        }
        if(i+1<m&&dp[i+1][j]==-1)
            dp[i+1][j]=uPWO(i+1,j,m,n,dp,obs);
        if(j+1<n&&dp[i][j+1]==-1)
            dp[i][j+1]=uPWO(i,j+1,m,n,dp,obs);
        return dp[i][j]=dp[i][j+1]+dp[i+1][j];
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=-1;
            }
           
        }
        dp[0][0]=uPWO(0,0,m,n,dp,obstacleGrid);
        return dp[0][0];
    }
};
