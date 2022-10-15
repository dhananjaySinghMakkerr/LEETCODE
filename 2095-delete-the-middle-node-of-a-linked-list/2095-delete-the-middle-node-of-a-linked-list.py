# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        p=head
        c=0
        while(p!=None):
            c+=1
            p=p.next
        if c==1:
            return None
        ##print(c)
        p=head
        d=c//2
        ##print(d)
        t=p
        for x in range(0,d):
            t=p
            p=p.next
        t.next=p.next
        return head
            
        