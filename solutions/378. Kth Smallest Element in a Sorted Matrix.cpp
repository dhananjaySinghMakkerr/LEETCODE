class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        priority_queue <int, vector<int>, greater<int> > pq; 
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
          for(j=0;j<matrix[i].size();j++)
          {
              pq.push(matrix[i][j]);
          }
        }
​
       
        for(i=0;i<k-1;i++)
        {
            pq.pop();
        }
        return pq.top();
    }
};
