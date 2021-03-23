/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int count1=0;
        int count2=0;
        int i=0;
        int diff;
        ListNode* p=headA;
        ListNode* q;
        while(p!=NULL)
        {
            count1++;
            p=p->next;
        }
        p=headB;
        while(p!=NULL)
        {
            count2++;
            p=p->next; 
        }
         if(count1>=count2)
         {
             diff=count1-count2;
             p=headA;
             for(;i<diff;i++)
             {
                 p=p->next;
             }
             q=headB;
         }
         else
         {
             diff=count2-count1;
             p=headB;
             for(;i<diff;i++)
             {
                 p=p->next;
             }
