/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
​
​
struct ListNode* rotateRight(struct ListNode* head, int k)
{
   struct ListNode* p=head;
    struct ListNode* rear1=NULL;
     struct ListNode* rear2=NULL;
    struct ListNode* temp=NULL;
    struct ListNode* head2=NULL;
    int c=0;
    int i;
    if(!head)
    {
        return NULL;
    }
   /* if(head->next=NULL)
    {
     return head;
    }*/
    while(head->next!=NULL)
    {
        rear2=head;
        head=head->next;
        c++;
    }
    c++;
    rear1=head;
    head=p;
    head2=p;
    if(k>=c)
    {
        k=k%c;
    }
    for(i=0;i<k;i++)
    {
        //head=p;
        
        if(rear2)
        {
        rear2->next=NULL;
