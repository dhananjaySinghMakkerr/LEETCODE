class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int i=0;
        int j=0;
        if(matrix.size()&&matrix[0].size()==0)
        {
            return false;
        }
        for(;i<matrix.size();i++)
        { 
            if(target<=matrix[i][matrix[i].size()-1])
            {
              for(;j<matrix[i].size();j++)
              {
                  if(target==matrix[i][j])
                     return true;
                
              }
             }
        }
        return false;
    }
             
            
              
    
​
    
};
