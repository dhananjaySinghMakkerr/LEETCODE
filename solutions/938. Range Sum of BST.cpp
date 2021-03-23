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
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        TreeNode* p=root;
        int sum=0;
        stack<TreeNode*> s;
        while(p!=NULL||s.size()!=0)
        {
            if(p!=NULL)
            {
                s.push(p);
                if(p->val>=low&&p->val<=high)
                {
                    sum=sum+p->val;
                }
                 p=p->left;
            }
            else
            {
                p=s.top();
                s.pop();
                p=p->right;
            }
        }
        return sum;
    }
};
