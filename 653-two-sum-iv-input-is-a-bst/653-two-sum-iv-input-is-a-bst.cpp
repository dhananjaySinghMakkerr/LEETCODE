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
    bool fT(TreeNode* root,int k,unordered_map<int,int> &m)
    {
        if(!root)
            return false;
        if(m.find(root->val)==m.end())
        {
        m[k-root->val]=root->val;
        bool x=fT(root->left,k,m);
        bool y=fT(root->right,k,m);
            return x||y;
        }
        return true;
        
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> m;
        return fT(root,k,m);
        
    }
};