class Solution {
public:
    int maximum69Number (int num) {
        vector<int> n;
        int x=num;
        int y{0};
        while(x)
        {
            n.insert(n.begin(),x%10);
            x=x/10;
        }
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==6)
            {
                n[i]=9;
                break;
            }
        }
        for(int i=0;i<n.size();i++)
            y=y*10+n[i];
        return y;
    }
};