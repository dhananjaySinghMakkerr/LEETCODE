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
    ListNode* reverse(ListNode* p,ListNode* t,ListNode* head)
    {
        if(p==NULL)
        {
            head=t;
            return head;
        }
        head=reverse(p->next,p,head);
        p->next=t;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1,NULL,l1);
        l2=reverse(l2,NULL,l2);
        ListNode *p3{NULL},*p1{l1},*p2{l2};
        int c{0};
        ListNode* l3=NULL;
        while(p1&&p2)
        {
            if((p1->val+p2->val+c)>9&&!(p1->next)&&!(p2->next))
            {
                if(l3==NULL)
                {
                    int val=p1->val+p2->val+c;
                    int x=val%10;
                    l3=new ListNode(x);
                    p3=l3;
                    l3->next=new ListNode(val/10);
                    l3=l3->next;
                    p1=p1->next;
                    p2=p2->next;
                    continue;
                }
                 int val=p1->val+p2->val+c;
                 int x=val%10;
                ListNode* t=new ListNode(x);
                l3->next=t;
                l3=l3->next;
                l3->next=new ListNode(val/10);
                l3=l3->next;
                p1=p1->next;
                p2=p2->next;
                continue;
            }
            if((p1->val+p2->val+c)>9)
            {
                if(l3==NULL)
                {
                    l3=new ListNode((p1->val+p2->val+c)%10);
                    c=1;
                    p3=l3;
                    p1=p1->next;
                    p2=p2->next;
                    continue;
                }
                ListNode* t=new ListNode((p1->val+p2->val+c)%10);
                l3->next=t;
                l3=l3->next;
                c=1;
            }
            else
            {
                if(l3==NULL)
                {
                    l3=new ListNode(p1->val+p2->val+c);
                    p3=l3;
                    p1=p1->next;
                    p2=p2->next;
                    c=0;
                    continue;
                }
                 ListNode* t=new ListNode(p1->val+p2->val+c);
                l3->next=t;
                l3=l3->next;
                c=0;
            }
            p1=p1->next;
            p2=p2->next;
        }
        while(p1)
        {
            if(p1->val+c>9&&!(p1->next))
            {
                ListNode* t=new ListNode(0);
                l3->next=t;
                l3=l3->next;
                l3->next=new ListNode(1);
                l3=l3->next;
                p1=p1->next;
                continue;
            }
            if(p1->val+c>9)
            {
                ListNode* t=new ListNode(0);
                l3->next=t;
                l3=l3->next;
                p1=p1->next;
                c=1;
                continue;
            }
            ListNode* t=new ListNode(p1->val+c);
            l3->next=t;
            l3=l3->next;
            p1=p1->next;
            c=0;
        }
         while(p2)
        {
             if(p2->val+c>9&&!(p2->next))
            {
                ListNode* t=new ListNode(0);
                l3->next=t;
                l3=l3->next;
                l3->next=new ListNode(1);
                l3=l3->next;
                p2=p2->next;
                continue;
            }
             if(p2->val+c>9)
            {
                ListNode* t=new ListNode(0);
                l3->next=t;
                 l3=l3->next;
                p2=p2->next;
                 c=1;
                continue;
            }
            ListNode* t=new ListNode(p2->val+c);
            l3->next=t;
            l3=l3->next;
            p2=p2->next;
             c=0;
        }
        p3=reverse(p3,NULL,p3);
        return p3;
    }
};