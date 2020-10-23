 class cmp
 {
     public:
     bool operator()(pair<int, int> const& a, pair<int, int> const& b) 
         
    { 
        return a.second < b.second; 
    } 
     
 };
​
class Solution {
public:
    
     vector<int> topKFrequent(vector<int>& nums, int k) 
    {
       priority_queue<pair<int, int>,vector<pair<int,int>>,cmp> pq; 
        vector<pair<int,int>> p;
         vector<int> n;
        set<int> s;
        set<int>::iterator it=s.begin();
        int i=0;
        int j=0;
        int num;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        it=s.begin();
        while(it!=s.end())
        {
            p.push_back(make_pair(*it,0));
            it++;
        }
        for(j=0;j<p.size();j++)
        {
            for(i=0;i<nums.size();i++)
            {
                if(p[j].first==nums[i])
                {
                    p[j].second++;
                }
            }
        }
        for(i=0;i<p.size();i++)
        {
        pq.push(make_pair(p[i].first,p[i].second));
