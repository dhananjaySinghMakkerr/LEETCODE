class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        
        int j=0;
        //int state=0;
       // string s;
       
        set<string> t;
        for(const auto & email : emails)
        {
             string s;
            int state=0;
            for(j=0;j<email.size();j++)
            {
                if(email[j]=='+')
                {
                  state=1;
                }
                else if(email[j]=='@')
                {
                    state=2;
                    s=s+email[j];
​
                }
               else if(email[j]!='.'&&state!=1)
                {
                    s=s+email[j];
                }
                
               else if(email[j]=='.'&&state==2)
                {
                    s=s+email[j];
                }
                
            }
​
            t.insert(s);
            cout<<s<<endl;
            
        }
        return t.size();
    }
};
