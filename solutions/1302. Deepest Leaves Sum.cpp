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
    int deepestLeavesSum(TreeNode* root) 
    {
        queue<pair<int,TreeNode*>> q;
        q.push(make_pair(0,root));
        priority_queue<pair<int,TreeNode*>> p;
        p.push(q.front());
        pair<int,TreeNode*>  t;
        //int sum=0;
        while(q.size()!=0)
         {
            t.first=q.front().first;
            t.second=q.front().second;
            q.pop();
            if(t.second->left)
            {
                t.first++;
                q.push(make_pair(t.first,t.second->left));
                p.push(make_pair(t.first,t.second->left)); 
            }
             if(t.second->right)
            {
                 if(t.second->left==NULL)
                      t.first++;
                q.push(make_pair(t.first,t.second->right));
                p.push(make_pair(t.first,t.second->right)); 
             }
        }
        int r; int sum=0;
         r=p.top().first;
        while(p.size()!=0)
        {
            //int sum=0;
           
            if(p.top().first==r)
