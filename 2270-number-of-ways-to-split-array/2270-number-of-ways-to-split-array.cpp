class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int splits{0};
        long long int s=0;
        int n=nums.size();
        vector<long long int> preS(n,0);
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            preS[i]=s;
        }
        for(int k=0;k<n-1;k++)
        {
            if(preS[k]>=preS[n-1]-preS[k])
                splits++;
        }
        return splits;
    }
};