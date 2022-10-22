class Solution {
public:
    bool isZ(unordered_map<char,int> &m)
    {
        for(auto x:m)
        {
            if(x.second>0)
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int cnt=0;
        int i{0},j{0};
        int minW=INT_MAX;
        int minI{-1},minJ{-1};
        string ans;
        unordered_map<char,int> m;
        for(auto x:t)
            m[x]++;
        while(i<s.size()&&j<=s.size())
        {
            while(isZ(m))
            {
                if(minW>(j-i))
                {
                    minW=j-i+1;
                    minI=i;
                    minJ=j-1;
                }
                if(m.find(s[i])!=m.end())
                {
                    if(m[s[i]]==0)
                    {
                    cnt--;
                    m[s[i]]++;
                    }
                    else
                        m[s[i]]++;
                }
                i+=1;
            }
            if(m.find(s[j])!=m.end())
            {
                if(m[s[j]]-1==0)
                    cnt++;
                m[s[j]]--;
            }
            j++;
        }
        if(minI==-1&&minJ==-1)
            return "";
        for(int k=minI;k<=minJ;k++)
            ans+=s[k];
        return ans;
    }
};