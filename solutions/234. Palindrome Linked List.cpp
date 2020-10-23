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
    bool isPalindrome(ListNode* head) 
    {
        vector<int> v;
        vector<int>  w;
        int i=0;
        if(head==NULL||head->next==NULL)
        {
            return true;
        }
        ListNode* p=head;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
            
        }
         p=head;
        ListNode* t=NULL;
        ListNode* temp=NULL;
        while(p!=NULL)
        {
            temp=p->next;
            p->next=t;
            t=p;
            p=temp;
        }
        //int j=0;
        while(t!=NULL)
        {
            w.push_back(t->val);
            t=t->next;
        }
        for(i=0;i<v.size();i++)
        {
            if(v[i]!=w[i])
