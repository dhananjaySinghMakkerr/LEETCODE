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
    int ans=INT_MIN;
    void lZZ(int d,TreeNode* r,int len)
    {
        if(!r)
            return;
        ans=max(ans,len);
        if(d)
        {
            lZZ(0,r->left,len+1);
            lZZ(1,r->right,1);
        }
        else
        {
            lZZ(1,r->right,len+1);
            lZZ(0,r->left,1);
        }
        
    }
    int longestZigZag(TreeNode* root) {
        if(!root)
            return 0;
        if(!(root->left)&&(!root->right))
            return 0;
        lZZ(0,root->left,1);
        lZZ(1,root->right,1);
        return ans;
    }
};