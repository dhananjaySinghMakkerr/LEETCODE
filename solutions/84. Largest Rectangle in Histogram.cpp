class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> preS(heights.size(),0);
        vector<int> nexS(heights.size(),0);
        int n=heights.size();
        preS[0]=0;
        stack<int> s;
        s.push(0);
        for(int i=1;i<n;i++)
        {
           while(!s.empty()&&heights[s.top()]>=heights[i])
           {
               s.pop();
           }
            if(s.empty())
                preS[i]=0;
            else
                preS[i]=s.top()+1;
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        nexS[n-1]=n-1;
        s.push(n-1);
        for(int i=n-1;i>=0;i--)
        {
           while(!s.empty()&&heights[s.top()]>=heights[i])
           {
               s.pop();
           }
            if(s.empty())
                nexS[i]=n-1;
            else
                nexS[i]=s.top()-1;
            s.push(i);
        }
        
        int maxA=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxA=max(maxA,(nexS[i]-preS[i]+1)*heights[i]);
        }
        return maxA;
    }
};
