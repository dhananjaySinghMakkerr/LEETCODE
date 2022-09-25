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
    TreeNode* retNode(int iS,int iE,int &postI,vector<int>& inorder, vector<int>& postorder)
    {
        if(iS>iE)
            return NULL;
        int inIndex=0;
        TreeNode* temp=new TreeNode(postorder[postI--]);
        for(int i=iS;i<=iE;i++)
        {
            if(inorder[i]==temp->val)
            {
                inIndex=i;
                break;
            }
        }
        temp->right=retNode(inIndex+1,iE,postI,inorder,postorder);
        temp->left=retNode(iS,inIndex-1,postI,inorder,postorder);
        
        return temp;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int postI=n-1;
        TreeNode* root=retNode(0,n-1,postI,inorder,postorder);
        return root;
    }
};
