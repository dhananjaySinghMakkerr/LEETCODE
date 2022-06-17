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
    int dfs(TreeNode* root,int tot,int Lsum)
     {
        if(root==NULL)
        {
            return 0; 
        }
        if(root->left==NULL&&root->right==NULL)
        {
           Lsum=Lsum*10+root->val;
           return Lsum;
        }
        int x,y;
        Lsum=Lsum*10+root->val;
        x=dfs(root->left,tot,Lsum);
        y=dfs(root->right,tot,Lsum);
        return x+y;
     }
    int sumNumbers(TreeNode* root) {
        
        return dfs(root,0,0);
    }
};
