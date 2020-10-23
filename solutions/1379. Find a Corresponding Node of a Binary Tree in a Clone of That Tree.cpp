/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
​
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        stack<TreeNode*> s;
        TreeNode* p=cloned;
        while(p!=NULL||s.size()!=0)
        {
            if(p!=NULL)
            {
                if(p->val==target->val)
                {
                    return p;
                }
                s.push(p);
                 p=p->left;
            }
            else
            {
              p=s.top();
              s.pop();
              p=p->right;
            }
        }
        return NULL;
    }
};
