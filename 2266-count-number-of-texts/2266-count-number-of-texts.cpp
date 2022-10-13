class Solution {
public:
     int mod = 1e9+7;
    int cT(int i,string &pK,vector<int> &dp)
    {
        if(i==pK.size())
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        int k=i+1;
        int t=i;
        long long int cnt{0};
        int s=0;
        int maxFreq=2;
        if(pK[i]=='7'||pK[i]=='9')
            maxFreq=3;
        while(pK[k]==pK[t]&&s<maxFreq)
        {
            cnt=cnt+cT(k,pK,dp)%mod;
            k++;
            t++;
            s++;
        }
        cnt=cnt+cT(k,pK,dp)%mod;
        return dp[i]=cnt%mod;
    }
    int countTexts(string pressedKeys) {
     
        int n=pressedKeys.length();
        vector<int> dp(1000000,-1);
        return cT(0,pressedKeys,dp)%mod;
    }
};