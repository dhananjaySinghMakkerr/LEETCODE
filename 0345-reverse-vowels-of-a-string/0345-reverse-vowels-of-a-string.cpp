#include<bits/stdc++.h>
class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for(auto x:s)
        {
            char y=tolower(x);
            if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u')
            {
                st.push(x);
            }
        }
        for(auto &x:s)
        {
            char y=tolower(x);
            if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u')
            {
               x=st.top();
               st.pop();
            }
        }
        return s;
    }
};