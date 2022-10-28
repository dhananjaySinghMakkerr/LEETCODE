class Solution {
public:
    vector<vector<int>> res;
    void dfs(int node,vector<int> ans,vector<int> &v,vector<vector<int>> &graph)
    {
        if(node==graph.size()-1)
        {
            ans.push_back(node);
            res.push_back(ans);
            return;
        }
        for(auto x:graph[node])
        {
            if(!v[x])
            {
            ans.push_back(node);
            dfs(x,ans,v,graph);
            ans.pop_back();
            }
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> v(graph.size(),0);
        vector<int> ans;
        dfs(0,ans,v,graph);
        return res;
    }
};