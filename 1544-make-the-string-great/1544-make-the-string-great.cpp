#include<bits/stdc++.h>
class Solution {
public:
    void mG(string &s)
    {
        if(s.length()==0)
            return;
        int n=s.length()-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]-'a'==s[i+1]-'A'||s[i]-'A'==s[i+1]-'a')
            {
                if(s.length()==2)
                    s.clear();
                else
                   s.erase(i,2);
                mG(s);
                n=s.length()-1;
            }
            
        }
        return;
        
    }
    string makeGood(string s) 
    {
        mG(s);
        return s;
        
    }
};