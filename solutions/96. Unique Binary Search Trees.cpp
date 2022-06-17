class Solution {
public:
    int numTrees(int n) {
        vector<int> v(n+1,0);
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;i++)
        {
            int s=0;
            for(int j=0;j<=i-1;j++)
            {
                s+=v[j]*v[(i-1)-j];
            }
            v[i]=s;
        }
        return v[n];
    }
};
