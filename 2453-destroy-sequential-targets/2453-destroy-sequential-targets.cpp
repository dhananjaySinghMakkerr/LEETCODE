class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int,int> m;
        int target=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]%space]++;
            target=max(target,m[nums[i]%space]);
        }
        int minV=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]%space]==target)
            {
                minV=min(minV,nums[i]);
            }
        }
        return minV;
    }
};