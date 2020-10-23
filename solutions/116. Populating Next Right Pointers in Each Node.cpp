/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
​
    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
​
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
​
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
​
class Solution {
public:
    Node* connect(Node* root) 
    {
        queue<Node*> q;
        Node* p=root;
        if(!root)
        {
         return NULL;
        }
        q.push(p);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            if(p->left)
            {
                q.push(p->left);
                p->left->next=p->right;
            }
            if(p->right)
            {
                q.push(p->right);
                if(p->next)
                p->right->next=p->next->left;
             }
        }
        return root;
    }
