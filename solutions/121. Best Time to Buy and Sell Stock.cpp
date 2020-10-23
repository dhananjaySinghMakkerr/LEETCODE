class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min=30000;
        int minI=0;
        int maxI=0;
        int max=-3;
        int i;
        int maxP,prof=0;
        if(prices.size()==0)
        {
            return 0;
        }
        if(prices.size()==1)
        {
         return 0;
        }
        stack<pair<int,int>> s;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
                minI=i;
                s.push({prices[i],minI});
            }
        }
        
        pair<int,int> p;
        pair<int,int> k;
        p=s.top();
        if(p.second==(prices.size()-1))
        {
            s.pop();
            p=s.top();
        }
        while(prices[p.second+1]<p.first)
        {
            
            
            if(s.size()==1)
            
            {
                return 0;
            }
            s.pop();
