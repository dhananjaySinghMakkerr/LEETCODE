/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        int cnt{0};
        if(head->next==NULL)
            return NULL;
        while(p!=NULL)
        {
          cnt++;
          p=p->next;
        }
        int nE=(cnt-n);
        if(nE==0)
        {
            head=head->next;
            return head;
        }
        p=head;
        ListNode* t=NULL;
        for(int i=0;i<nE;i++)
        {
            t=p;
            p=p->next;
        }
        t->next=p->next;
        return head;
    }
};