//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int subsetXOR(vector<int> arr, int N, int K) {
        // code here
        int maxX=0;
        for(int i=0;i<N;i++)
        {
            maxX=max(maxX,arr[i]);
        }
        if(N==1)
        {
            if(K==arr[0])
              return 1;
            else
              return 0;
        }
        int mX=(1<<(int)log2(maxX)+1)-1;
        vector<vector<int>> dp(N+1,vector<int>(mX+1,0));
        dp[0][0]=1;
        for(int j=1;j<=mX;j++)
        {
            dp[0][j]=0;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=0;j<=mX;j++)
            {
                if(dp[i-1][j]!=0)
                    dp[i][j^arr[i-1]]=dp[i-1][j^arr[i-1]]+dp[i-1][j];
            }
        
        for(int j=0;j<=mX;j++)
          dp[i][j]=max(dp[i-1][j],dp[i][j]);
        }
        /*for(auto x:dp)
        {
            for(auto y:x)
              cout<<y<<" ";
            cout<<endl;
        }*/
        return dp[N][K];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends