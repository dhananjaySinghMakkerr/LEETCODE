class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setC{0};
        long long int n2=num2;
        long long int n1=num1;
        while(n2)
        {
            if(n2&1)
                setC++;
            n2=n2>>1;
        }
        priority_queue<long long int> indexes;
        long long int index=0;
        while(n1)
        {
            if(n1&1)
            {
                indexes.push(index);
            }
            n1=n1>>1;
            index++;
        }
        long long int num=0;
        int s=0;
       // cout<<setC<<"\n";
        while(!indexes.empty()&&s<setC)
        {
            int ind=indexes.top();
            //cout<<ind<<"\n";
            indexes.pop();
            int temp=1;
            temp=temp<<ind;
            num=num|temp;
            s++;
        }
        long long int n3=num;
        long long int in=0;
        cout<<n3<<" ";
        //cout<<"->"<<s;
        while(s<setC&&n3)
        {
            while(n3)
            {
                if(s==setC)
                    break;
                if(n3&1)
                {
                  n3=n3>>1;
                    in++;
                }
                else
                {
                    int temp=1;
                    temp=temp<<in;
                    //cout<<num<<"->> ";
                    num=num|temp;
                    n3=n3>>1;
                    s++;
                    in++;
                }
            }
        }
        while(s<setC)
        {
            int t=1;
            t=t<<in;
            num=num|t;
            in++;
            s++;
        }
        //cout<<num<<" ";
        return num;
    }
};