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
    void addNode(TreeNode* root,int val,int depth)
    {
        queue<pair<TreeNode*,int>> q;
        int d=1;
        q.push({root,d});
        while(!q.empty())
        {
          int s=q.size();
          for(int i=0;i<s;i++)
          {
              pair<TreeNode*,int> f=q.front();
              q.pop();
              if(f.second==depth)
              {
                  TreeNode* l=f.first->left;
                  TreeNode* r=f.first->right;
                  TreeNode* temp1=new TreeNode(val);
                  TreeNode* temp2=new TreeNode(val);
                  f.first->left=temp1;
                  temp1->left=l;
                  f.first->right=temp2;
                  temp2->right=r;
              }
              else
              {
                  if(f.first->left)
                      q.push({f.first->left,f.second+1});
                  if(f.first->right)
                      q.push({f.first->right,f.second+1});
              }
          }
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode* t;
        if(depth==1)
        {
            t=new TreeNode(val);
            t->left=root;
            root=t;
            return t;
        }
        addNode(root,val,depth-1);
        return root;
        
        
    }
};