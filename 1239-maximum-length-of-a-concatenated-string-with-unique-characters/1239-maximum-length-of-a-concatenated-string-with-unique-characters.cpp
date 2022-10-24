#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void concat(int i,string s,int &maxL,vector<string> &arr)
    {
        if(i==arr.size())
            return;
        string t=s;
        s+=arr[i];
        unordered_map<char,int> freq;
        for(auto x:s)
        {
            if(freq.find(x)!=freq.end())
            {
                concat(i+1,t,maxL,arr);
                int len=t.length();
                maxL=max(maxL,len);
                return;
            }
            else
                freq[x]++;
        }
        int l=s.length();
        maxL=max(maxL,l);
        concat(i+1,s,maxL,arr);
        concat(i+1,t,maxL,arr);
        int len=t.length();
        maxL=max(maxL,len);
        return;
    }
    int maxLength(vector<string>& arr) {
        int maxL=0;
        string s="";
        concat(0,s,maxL,arr);
        return maxL;
    }
};