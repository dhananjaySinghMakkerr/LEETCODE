class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> preS(nums.size(),0);
        unordered_map<int,int> m;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            preS[i]=s%k;
            if(!preS[i])
            {
                if(i>=1)
                    return true;
            }
            if(m.find(preS[i])!=m.end())
            {
                if(i-m[preS[i]]>1)
                    return true;
            }
            else
                m[preS[i]]=i;
        }
        return false;
    }
};