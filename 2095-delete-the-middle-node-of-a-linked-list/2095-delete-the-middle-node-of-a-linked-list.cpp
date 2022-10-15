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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* p=head;
        int c{0};
        while(p)
        {
            c++;
            p=p->next;
        }
        if(c==1)
            return NULL;
        p=head;
        int dest=c/2;
        ListNode* t=p;
        for(int i=0;i<dest;i++)
        {
            t=p;
            p=p->next;
        }
        t->next=p->next;
        return head;
    }
};