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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        if(root==NULL)
        {
            return v;
        }
        //int l=0;
        q.push(root);
        while(!q.empty())
        {
          int k=q.size();
           vector<int> x;
          for(int i=0;i<k;i++)
          {
            TreeNode* t=q.front();
            q.pop();
            x.push_back(t->val);
            if(t->left)
             q.push(t->left);
            if(t->right)
             q.push(t->right);
          }
          v.push_back(x);
          //l++;
        }
        return v;
​
        
    }
};
