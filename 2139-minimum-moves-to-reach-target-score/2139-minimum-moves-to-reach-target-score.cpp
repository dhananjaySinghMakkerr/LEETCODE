class Solution {
public:
    int mM(int t,int m)
    {
        if(t==1)
            return 0;
        if(m==0)
            return t-1;
        int x{INT_MAX};
        if(t%2==0&&m)
        {
            x=mM(t/2,m-1);
            return 1+x;
        }
        x=mM(t-1,m);
        return 1+x;
    }
    int minMoves(int target, int maxDoubles) {
        return mM(target,maxDoubles);
    }
};