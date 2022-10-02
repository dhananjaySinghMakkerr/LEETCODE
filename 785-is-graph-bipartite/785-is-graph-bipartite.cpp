class Solution {
public:
    bool dfs(int node,int c,vector<vector<int>> &g,vector<int> &vis)
    {
        vis[node]=c;
        for(auto x:g[node])
        {
            bool st;
            if(vis[x]==c)
                return false;
            if(!vis[x])
            {
                if(c==1)
                {
                    st=dfs(x,2,g,vis);
                    if(!st)
                        return false;
                    
                }
                else
                {
                    st=dfs(x,1,g,vis);
                    if(!st)
                        return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(!dfs(i,1,graph,vis))
                    return false;
            }
        }
        return true;
    }
};