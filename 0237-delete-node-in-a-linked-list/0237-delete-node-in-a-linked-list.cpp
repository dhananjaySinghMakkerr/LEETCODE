/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        int val=node->val;
        ListNode* p=node;
        ListNode* t=NULL;
        while(p->next!=NULL)
        {
            t=p;
            p=p->next;
            t->val=p->val;
        }
        t->next=NULL;
    }
};