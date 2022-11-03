class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> freq;
        for(auto x:words)
            freq[x]++;
        int ans{0};
        bool c{false};
        for(auto x:freq)
        {
            if(x.first[0]==x.first[1])
            {
                if(x.second%2==0)
                    ans+=x.second;
                else
                {
                    ans+=x.second-1;
                    c=true;
                }
            }
            else if(x.first[0]<x.first[1])
            {
                string t=x.first;
                reverse(t.begin(),t.end());
                if(freq.find(t)!=freq.end())
                    ans+=2*min(x.second,freq[t]);
            }
        }
        if(c)
            ans++;
        return 2*ans;
    }
};