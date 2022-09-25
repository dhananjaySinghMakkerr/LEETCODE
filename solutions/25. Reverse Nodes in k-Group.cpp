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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *p{head},*t{NULL},*temp;
        ListNode* cnt=head;
        int m=k;
        while(cnt!=NULL&&m>0)
        {
            cnt=cnt->next;
            m--;
        }
        if(m)
            return head;
        int c{k};
        while(p!=NULL&&c>0)
        {
            temp=p->next;
            p->next=t;
            t=p;
            p=temp;
            c--;
        }
        if(temp)
           head->next=reverseKGroup(temp,k);
        return t;
    }
};
