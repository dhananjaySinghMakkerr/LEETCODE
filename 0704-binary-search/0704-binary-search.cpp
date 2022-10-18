class Solution {
public:
    int bS(int l,int h,int t,vector<int> &nums)
    {
        int mid=(l+h)/2;
        if(l>h)
            return -1;
        if(nums[mid]>t)
            return bS(l,mid-1,t,nums);
        else if(nums[mid]<t)
            return bS(mid+1,h,t,nums);
        else
            return mid;
    }
    int search(vector<int>& nums, int target) {
        return bS(0,nums.size()-1,target,nums);
    }
};