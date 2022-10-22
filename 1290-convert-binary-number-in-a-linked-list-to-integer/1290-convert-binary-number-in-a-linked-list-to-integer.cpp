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
    int getDecimalValue(ListNode* head) {
        ListNode* p=head;
        int cnt{0};
        int dec{0};
        while(p)
        {
            cnt++;
            p=p->next;
        }
        p=head;
        for(int i=cnt-1;i>=0;i--)
        {
            dec+=p->val*pow(2,i);
            p=p->next;
        }
        return dec;
    }
};