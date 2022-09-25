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
    int height(TreeNode* root)
    {
      if(root==NULL)
          return 0;
      int x{0},y{0};
      x=height(root->left);
      y=height(root->right);
      return 1+max(x,y);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh{0},rh{0};
        lh=height(root->left);
        rh=height(root->right);
         if(abs(lh-rh)>1)
            return false;
        bool ls=isBalanced(root->left);
        bool rs=isBalanced(root->right);
        return ls&&rs;
    }
};
