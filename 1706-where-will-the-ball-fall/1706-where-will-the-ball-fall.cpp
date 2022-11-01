class Solution {
public:
    int fB(int i,int j,vector<vector<int>> &grid)
    {
        if(i==grid.size()-1)
        {
            if(j<grid[0].size()-1&&grid[i][j]==1&&grid[i][j+1]!=-1)
                return j+1;
            else if(j>0&&grid[i][j]==-1&&grid[i][j-1]!=1)
                return j-1;
            else
                return -1;
        }
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size())
            return -1;
        if(j+1<grid[0].size()&&grid[i][j]==1&&grid[i][j+1]==-1)
            return -1;
        if(j>0&&grid[i][j]==-1&&grid[i][j-1]==1)
            return -1;
        int ans{0};
        if(grid[i][j]==1)
        {
            ans=fB(i+1,j+1,grid);
            if(ans==-1)
                return ans;
        }
        if(grid[i][j]==-1)
        {
            ans=fB(i+1,j-1,grid);
            if(ans==-1)
                return -1;
        }
        return ans;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> res(grid[0].size(),0);
        for(int i=0;i<grid[0].size();i++)
        {
            res[i]=fB(0,i,grid);
        }
        return res;
    }
};