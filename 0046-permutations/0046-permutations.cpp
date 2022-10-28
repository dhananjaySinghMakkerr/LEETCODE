class Solution {
public:
    void permute(vector<int> res,vector<int> nums,vector<vector<int>> &result)
    {
        if(nums.size()==0)
        {
            result.push_back(res);
            return;
        }
        vector<int> ans=res;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> t=nums;
            ans.push_back(nums[i]);
            t.erase(t.begin()+i);
            permute(ans,t,result);
            ans=res;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        permute(ans,nums,result);
        return result;
    }
};