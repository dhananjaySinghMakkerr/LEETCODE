class Solution 
{ public: bool canReach(vector<int>& arr, int start)
{ queue<int> q; 
 q.push(start); 
 int pos=start; 
 int status[100000];
  int i,j; 
 for(j=0;j<arr.size();j++)
 {
     status[j]=0;
 }
​
 for(i=0;i<arr.size();i++) 
 { if(arr[i]==0) 
 { 
     break; 
 } 
 } 
 status[start]=1;
 while(q.size()!=0) 
 { 
     pos=q.front(); 
     q.pop(); 
     if(arr[pos]==0)
     { return true; 
     } 
     if(pos+arr[pos]<arr.size()&&status[pos+arr[pos]]==0)
     { q.emplace(pos+arr[pos]); 
      status[pos+arr[pos]]=1; 
     } 
     if(pos-arr[pos]>=0&&status[pos-arr[pos]]==0) 
     { q.emplace(pos-arr[pos]); status[pos-arr[pos]]=1; } } return false; } };
​
​
​
​
​
/*class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<bool> enqueued(n, false);
        queue<int> q;
        q.emplace(start);
        enqueued[start] = true;
        while (!q.empty()) {
            int idx = q.front();
