class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string t;
        string ans;
        while(i<s.size())
        {
            
            if(s[i]==' ')
            {
                reverse(t.begin(),t.end());
                t+=' ';
                ans+=t;
                t.clear();
                i++;
                continue;
            }
            t+=s[i];
            i++;
            
        }
        reverse(t.begin(),t.end());
        ans+=t;
        return ans;
    }
};