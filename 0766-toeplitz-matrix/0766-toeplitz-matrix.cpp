class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0;
        for(int j=0;j<c;j++)
        {
            int ele=matrix[i][j];
            int m{i+1},n{j+1};
            while(m<r&&n<c)
            {
                cout<<matrix[m][n]<<" ";
                if(matrix[m++][n++]!=ele)
                    return false;
            }
            cout<<endl;
        }
        int j=0;
        for(int i=1;i<r;i++)
        {
            int ele=matrix[i][j];
            int m{i+1},n{j+1};
            while(m<r&&n<c)
            {
                cout<<matrix[m][n]<<" ";
                if(matrix[m++][n++]!=ele)
                    return false;
            }
            cout<<endl;
        }
        return true;
    }
};