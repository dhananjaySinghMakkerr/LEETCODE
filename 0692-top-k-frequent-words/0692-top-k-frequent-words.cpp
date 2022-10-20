class Solution {
public:
    static bool cmp(pair<int,string> a,pair<int,string> b)
    {
      if(a.first==b.first)
          return a.second<b.second;
      return a.first>b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> freq;
        for(auto x:words)
        {
          freq[x]++;
        }
        priority_queue<pair<int,string>> q;
        for(auto x:freq)
            q.push({x.second,x.first});
        vector<pair<int,string>> sol;
        vector<string> res;
        int c=k;
        while(!q.empty())
        {
            sol.push_back({q.top()});
            q.pop();
        }
        sort(sol.begin(),sol.end(),cmp);
        for(auto x:sol)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }
        for(int i=0;i<k;i++)
           res.push_back(sol[i].second);
        return res;
    }
};