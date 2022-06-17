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
    void dfs(TreeNode* root,string t,vector<string> &s)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL&&root->right==NULL)
        {
           t+=""+to_string(root->val);
           s.push_back(t);
        }
        t+=""+to_string(root->val)+"->";
        dfs(root->left,t,s);
        dfs(root->right,t,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> p;
        string n;
        dfs(root,n,p);
        return p;
    }
};
