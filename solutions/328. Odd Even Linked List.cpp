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
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode* p=head;
        if(!head)
        {
            return NULL;
        }
        ListNode* eve=head->next;
        ListNode* e=NULL;
        while(p!=NULL)
        {
            e=p->next;
            if(e&&e->next)
            {
            p->next=e->next;
            }
            else
            {
                p->next=NULL;
            }
            p=e;
        }
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=eve;
        return head;
    }
};
