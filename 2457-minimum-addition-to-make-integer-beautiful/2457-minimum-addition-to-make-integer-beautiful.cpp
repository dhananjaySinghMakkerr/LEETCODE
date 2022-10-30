class Solution {
public:
    long long int digS(long long n)
    {
        long long int temp=n;
        long long int dig,sum{0};
        while(temp!=0)
        {
            dig=temp%10;
            sum+=dig;
            temp=temp/10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        if(digS(n)<=target)
            return 0;
        long long int count=10;
        long long int temp=n;
        cout<<digS(n);
        while(digS(temp)>target)
        {
            cout<<digS(temp)<<" \n";
            long long int mod=n%count;
            temp=n+count-mod;
            count*=10;
        }
        return temp-n;
    }
};