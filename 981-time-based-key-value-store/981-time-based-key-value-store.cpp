#include<bits/stdc++.h>
using namespace std;
class TimeMap {
public:
    map<string,vector<pair<int,string>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
          m[key].push_back({timestamp,value});
        //sort(m[key].begin(),m[key].end());
        
    }
    
    string get(string key, int timestamp) {
        string s;
        int l=0;
        int h=m[key].size()-1;
        int mid;
        int idx=-1;
        if(m.find(key)==m.end())
            return "";
        while(l<=h)
        {
            mid=(l+h)/2;
            if(m[key][mid].first==timestamp)
                return m[key][mid].second;
            else if(m[key][mid].first>timestamp)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
                idx=max(idx,mid);
            }
        }
        return (idx==-1) ? "": m[key][idx].second;
       
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */