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
