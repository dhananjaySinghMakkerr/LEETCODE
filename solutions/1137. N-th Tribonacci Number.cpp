class Solution {
public:
    int tribonacci(int n) 
    {
        int a[100];
        a[0]=0;
        a[1]=1;
        a[2]=1;
        int i;
        for(i=3;i<100;i++)
        {
            a[i]=-1;
        }
         for(i=3;i<=n;i++)
         {
             if(a[i]==-1)
             {
             a[i]=a[i-1]+a[i-2]+a[i-3];
             }
         }
        return a[n];
    }
};
