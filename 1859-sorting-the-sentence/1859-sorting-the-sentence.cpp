class Solution {
public:
    string sortSentence(string s) {
        map<int,string> m;
        string t;
        int num=0;
        for(auto x:s)
        {
            if(x==' ')
                t.clear();
            else if(x>='0'&&x<='9')
            {
                num=max(num,x-'0');
                m[x-'0']=t;
            }
            else
                t+=x;
        }
        string ans="";
        for(auto x:m)
        {
            if(x.first==num)
            {
                 ans=ans+x.second;
                 continue;
            }
            ans=ans+x.second+" ";
        }
        return ans;
    }
};