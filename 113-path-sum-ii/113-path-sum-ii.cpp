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
    void pS(TreeNode* root,int tS,vector<int> path,vector<vector<int>> &ans)
    {
        if(root==NULL)
            return;
        if(!root->left&&!root->right&&tS-root->val)
        {
          return;
        }
        else if(!root->left&&!root->right&&tS-root->val==0)
        {
          path.push_back(root->val);
          ans.push_back(path);
          return;
        }
        vector<int> pt=path;
            pt.push_back(root->val);
            pS(root->left,tS-root->val,pt,ans);
            pS(root->right,tS-root->val,pt,ans);
        
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> a;
        vector<vector<int>> ans;
        pS(root,targetSum,a,ans);
        return ans;
    }
};