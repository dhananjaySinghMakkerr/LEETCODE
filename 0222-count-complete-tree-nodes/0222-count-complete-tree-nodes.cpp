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
    int countNodes(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int cnt{0};
        if(root==NULL)
            return 0;
        while(!q.empty())
        {
            int sze=q.size();
            for(int i=0;i<sze;i++)
            {
              TreeNode* p=q.front();
              q.pop();
              cnt++;
              if(p->left)
                  q.push(p->left);
              if(p->right)
                  q.push(p->right);
              if(!p->left&&q.size())
              {
                  cnt+=q.size();
                  while(!q.empty())
                      q.pop();
                  break;
              }
              if(!p->right&&q.size())
              {
                  cnt+=q.size();
                  while(!q.empty())
                      q.pop();
                  break;
              }
            }
            if(q.empty())
                break;
        }
        return cnt;
    }
};