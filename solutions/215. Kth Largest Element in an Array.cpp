class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int i;
        priority_queue<int> p;
        for(i=0;i<nums.size();i++)
        {
            p.push(nums[i]);
        }
        for(i=1;i<k;i++)
        {
            p.pop();
        }
        return p.top();
    }
};
