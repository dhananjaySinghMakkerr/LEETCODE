#include<unordered_map>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxL=0;
        for(size_t i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(size_t i=0;i<nums.size();i++)
        {
            if(m.find(nums[i]-1)==m.end())
            {
                int c=nums[i];
                int l=0;
                while(m.find(c)!=m.end())
                {
                    l++;
                    c++;
                }
                maxL=max(l,maxL);
            }
        }
        return maxL;
    }
};
