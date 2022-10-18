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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(!root->left&&!root->right)
            return 0;
        int x{0},y{0};
        x=height(root->left);
        y=height(root->right);
        return 1+max(x,y);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int lh{0},rh{0},z{0};
        if(root->left)
           lh=1+height(root->left);
        if(root->right)
           rh=1+height(root->right);
        z=lh+rh;
        int x{0},y{0};
        x=diameterOfBinaryTree(root->left);
        y=diameterOfBinaryTree(root->right);
        return max(z,max(x,y));
    }
};