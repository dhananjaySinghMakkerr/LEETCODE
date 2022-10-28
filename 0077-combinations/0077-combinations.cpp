class Solution {
public:
    void comb(int i,int n,int k,vector<int> &res,vector<vector<int>> &ans)
    {
        if(res.size()==k)
        {
            ans.push_back(res);
            return;
        }
        for(int j=i;j<=n;j++)
        {
         res.push_back(j);
         comb(j+1,n,k,res,ans);
         res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        //vector<int> nums;
        vector<int> ans;
       
        comb(1,n,k,ans,res);
        return res;
    }
};