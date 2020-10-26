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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> v;
        stack<TreeNode*> s;
        TreeNode* p=root1;
        TreeNode* q=root2;
        while(p!=NULL||s.size()!=0)
        {
            if(p!=NULL)
            {
                s.push(p);
              p=p->left;
              
            }
            else
            {
                p=s.top();
                s.pop();
                if(p)
                v.push_back(p->val);
                p=p->right;
            }
        }
        while(q!=NULL||s.size()!=0)
        {
            if(q!=NULL)
            {
                s.push(q);
              q=q->left;
              
            }
            else
            {
                q=s.top();
                s.pop();
                v.push_back(q->val);
                q=q->right;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};
