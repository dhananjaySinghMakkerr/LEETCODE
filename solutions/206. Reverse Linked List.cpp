/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* t=NULL;
        ListNode* p=head;
        ListNode* q=NULL;
        if(head==NULL)
        {
          return NULL;
        }
        t=p->next;
        p->next=NULL;
        q=head;
        while(t!=NULL)
        {
            p=t;
            t=t->next;
            p->next=q;
            q=p;
        }
        head=p;
        return head;
    }
};
