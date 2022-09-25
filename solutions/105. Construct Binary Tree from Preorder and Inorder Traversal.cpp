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
    TreeNode* retNode(int iS,int iE,int &preIndex,vector<int>& preorder, vector<int>& inorder)
    {
        if(iS>iE)
            return NULL;
        TreeNode* temp=new TreeNode(preorder[preIndex++]);
        int inIndex=0;
        for(int i=iS;i<=iE;i++)
        {
            if(inorder[i]==temp->val)
            {
                inIndex=i;
                break;
            }
        }
        temp->left=retNode(iS,inIndex-1,preIndex,preorder,inorder);
        temp->right=retNode(inIndex+1,iE,preIndex,preorder,inorder);
        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preI=0;
        TreeNode* root=NULL;
        root=retNode(0,inorder.size()-1,preI,preorder,inorder);
        return root;
    }
};
