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
        vector<pair<int,string>> sol;
         for(auto x:freq)
            sol.push_back({x.second,x.first});
        vector<string> res;
        sort(sol.begin(),sol.end(),cmp);
        for(int i=0;i<k;i++)
           res.push_back(sol[i].second);
        return res;
    }
};