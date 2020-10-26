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
    bool isCompleteTree(TreeNode* root) 
    {
        int v[1010];
        int numC=0,i,index;
        for(i=1;i<=100;i++)
        {
         v[i]=-1;
        }
        i=1;
        queue<TreeNode*> q;
        TreeNode* p;
        q.push(root);
        v[1]=root->val;
        while(q.size()!=0)
        {
          p=q.front();
        numC++;
          q.pop();
          if(p->left)
