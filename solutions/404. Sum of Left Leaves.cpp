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
    int sumOfLeftLeaves(TreeNode* root)
    {
        stack<TreeNode*> s;
        TreeNode* p=root;
        TreeNode* t=root;
        int sum=0;
        while(p!=NULL||!s.empty())
        {
            if(p!=NULL)
            {
               
                 if(p==t->left&&t)
                {
                    if(p->left==NULL&&p->right==NULL)
                    {
                        sum=sum+p->val;
                    }
                }
                 s.push(p);
                t=p;
                p=p->left;
                  
                 
            }
            else
            {
                p=s.top();
                s.pop();
                
                if(s.empty())
                {
                 t=p;
                p=p->right;
                }
