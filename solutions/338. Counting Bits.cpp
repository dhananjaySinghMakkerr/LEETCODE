class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> v(n+1,0);
        for(int i=0;i<=n;i++)
        {
            int cnt=0;
            int x=i;
            while(x)
            {
                if(x&1)
                   cnt++;
                x=x>>1;
            }
            v[i]=cnt;
        }
        return v;
    }
};
