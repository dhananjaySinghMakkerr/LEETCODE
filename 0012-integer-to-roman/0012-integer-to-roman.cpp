class Solution {
public:
    void retNum(int num,int mul,string &ans,unordered_map<int,char> &m)
    {
        if(num==0)
            return;
        retNum(num/10,mul*10,ans,m);
        if(num%10==4)
        {
            ans=ans+m[mul]+m[5*mul];
        }
        if(num%10>=1&&num%10<4)
        {
            for(int i=0;i<num%10;i++)
                ans+=m[1*mul];
        }
        if(num%10>=5&&num%10<9)
        {
            ans+=m[5*mul];
            for(int i=1;i<=(num%10)-5;i++)
                ans+=m[mul];
        }
        else if(num%10==9)
        {
            ans=ans+m[mul]+m[10*mul];
        }
        
    }
    string intToRoman(int num) {
        unordered_map<int,char> m;
        m[1]='I';
        m[5]='V';
        m[10]='X';
        m[50]='L';
        m[100]='C';
        m[500]='D';
        m[1000]='M';
        string res="";
        retNum(num,1,res,m);
        //cout<<res;
        return res;
    }
};