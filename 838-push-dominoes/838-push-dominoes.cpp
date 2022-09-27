class Solution {
public:
    string pushDominoes(string d) {
        int n=d.size();
        int i{0};
        int right=-1;
        for(;i<n;i++)
        {
            if(d[i]=='L')
            {
                if(right==-1)
                    for(int k=i-1;k>=0&&d[k]=='.';k--)
                    {
                        d[k]='L';
                    }
                else
                {
                    int j=right+1;
                    int k=i-1;
                    while(j<k)
                    {
                        d[j++]='R';
                        d[k--]='L';
                    }
                    right=-1;
                }
            }
            else if(d[i]=='R')
            {
                if(right!=-1)
                {
                    for(int k=right+1;k<i;k++)
                        d[k]='R';
                }
                    right=i;
            }
        }
        if(right!=-1)
        {
             for(int k=right+1;k<n;k++)
                        d[k]='R';
        }
        return d;
    }
};