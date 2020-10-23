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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* p=NULL;
        while(q.size()!=0)
        {
            p=q.front();
            q.pop();
             if(p->right)
            {
                q.push(p->right);
            }
           
            if(p->left)
            {
                q.push(p->left);
            }
        }
        return p->val;
    }
};
