/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,int* m,int x)
    {
        if(root==NULL)
        {
            return;
        }
       if(root->left==NULL&&root->right==NULL)
       {
        x=x+1;
        *m=min(*m,x);
         return;
       }
       x=x+1;
       dfs(root->left,m,x);
       dfs(root->right,m,x);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
           return 0;
        int m=INT_MAX;
        dfs(root,&m,0);
        return m;
        
    }
};
