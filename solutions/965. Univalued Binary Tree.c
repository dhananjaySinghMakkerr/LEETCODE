/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
​
typedef struct stackNode
{
    struct TreeNode* add;
    struct stackNode* next;
}stackNode;
​
​
//----------------------------------------------------------------------END STRUCTURE DEFINITION-------------------------------------//
​
//-----------PUSH OPERATION ON A STACK------
​
void push(stackNode** top,struct TreeNode* t)
{
    stackNode* temp=(stackNode*)malloc(sizeof(stackNode));
    temp->next=NULL;
    temp->add=t;
    if((*top)==NULL)
    {
        (*top)=temp;
    }
    else
        {
        temp->next=(*top);
        (*top)=temp;
    }
}
​
//-----------------------------------------------------------------
​
//-----------POP OPERATION ON A STACK---------
​
void pop(stackNode** p,struct TreeNode** t)
{
    stackNode* temp;
   temp=(*p);
   (*t)=temp->add;
   (*p)=(*p)->next;
