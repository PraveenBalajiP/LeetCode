# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        ll=[]
        l=[]
        while temp:
            ll.append(temp.val)
            temp=temp.next
        l=list(reversed(ll))
        temp=head
        i=0
        while temp:
            temp.val=l[i]
            temp=temp.next
            i=i+1
        return head