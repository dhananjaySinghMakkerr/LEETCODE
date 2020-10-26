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
    int sumEvenGrandparent(TreeNode* root)
    {
        queue<pair<TreeNode*,TreeNode*>> q;
        int sum=0;
        TreeNode* t=NULL;
        q.push(make_pair(t,root));
        while(q.size()!=0)
        {
            TreeNode* p=q.front().second;
            TreeNode* parent=q.front().first;
            q.pop();
            if(p->left)
            {
              q.push(make_pair(p,p->left));
                if(parent&&parent->val%2==0)
                {
                    sum=sum+p->left->val;
                }
            }
            if(p->right)
            {
              q.push(make_pair(p,p->right));
                if(parent&&parent->val%2==0)
                {
                    sum=sum+p->right->val;
                }
            
             }
        }
         return sum;
    }
};
