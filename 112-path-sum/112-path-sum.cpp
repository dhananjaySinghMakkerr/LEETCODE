/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool pathS(TreeNode* root,int tS)
    {
      if(root->left==NULL&&root->right==NULL&&tS-root->val==0)
          return true;
    else if(root->left==NULL&&root->right==NULL&&tS-root->val!=0)
         return false;
        bool x{false},y{false};
       if(root->left)
           x=pathS(root->left,tS-root->val);
       if(root->right)
           y=pathS(root->right,tS-root->val);
        return x||y;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(root==NULL)
           return false;
        return pathS(root,targetSum);
    }
};