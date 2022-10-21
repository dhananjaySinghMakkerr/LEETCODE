class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> diff;
        for(int i=0;i<nums.size();i++)
        {
            if(diff.find(nums[i])!=diff.end())
            {
                if(abs(diff[nums[i]]-i)<=k)
                    return true;
            }
            diff[nums[i]]=i;
        }
        return false;
    }
};