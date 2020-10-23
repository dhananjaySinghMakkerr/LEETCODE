class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> v;
        int temp,i,j;
        for(i=0;i<nums.size();i++)
        {
            int c=0;
            temp=nums[i];
            nums[i]=nums[0];
            nums[0]=temp;
            for(j=1;j<nums.size();j++)
            {
                if(nums[j]<nums[0])
                {
                    c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};
