class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int i;
        set<int> s;
        priority_queue<int> p;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        set<int>::iterator it=s.begin();
        while(it!=s.end())
        {
            p.push(*it);
            it++;
        }
        if(s.size()<3)
        {
            return p.top();
        }
        else
        {
        for(i=0;i<2;i++)
        {
            p.pop();
        }
            return p.top();
        }
        
    }
};
