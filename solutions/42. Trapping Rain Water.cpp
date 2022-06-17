class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> maxL(n,0);
        vector<int> maxR(n,0);
        int lmax{height[0]},rmax{height[n-1]},tW{0};
        for(int i=1;i<n;i++)
        {
          if(height[i]>lmax)
             lmax=height[i];
           maxL[i]=lmax;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(height[i]>rmax)
              rmax=height[i];
            maxR[i]=rmax;
        }
        for(int i=1;i<n;i++)
        {
            if(height[i]<maxL[i] && height[i]<maxR[i])
                   tW+=min(maxL[i],maxR[i])-height[i];
        }
        return tW;
​
        
    }
};
