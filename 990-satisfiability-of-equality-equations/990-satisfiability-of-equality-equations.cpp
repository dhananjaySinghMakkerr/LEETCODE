class DisjointSet
{
    public:
       vector<char> parent;
       DisjointSet()
       {
           parent.resize(26);
           for(int i=0;i<26;i++)
              parent[i]=i+'a';
       }
       char findSet(char a)
       {
           if(parent[a-'a']==a)
               return a;
           return findSet(parent[a-'a']);
       }
       bool isSameSet(char a,char b)
       {
           return (findSet(a)==findSet(b));
       }
       void unionS(char a,char b)
       {
           if(!isSameSet(a,b))
           {
               char x=findSet(a);
               char y=findSet(b);
               parent[y-'a']=x;
           }
       }
};

class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        DisjointSet eqn;
        bool flag=true;
        for(auto it:equations)
        {
            char x,y;
            if(it[1]=='=')
            {
                x=it[0];
                y=it[3];
                eqn.unionS(x,y);
            }
        }
        for(auto it:equations)
        {
            if(it[1]=='!')
            {
              flag=(eqn.isSameSet(it[0],it[3])) ? false : true;
              if(flag==false)
                  return false;
            }
        }
        return true;
    }
};