/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *temp=head;
    struct ListNode *fast,*slow;
    fast=slow=head;
    struct listNode *t;
    while(fast!=NULL && fast->next!=NULL)
    {   
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            {
                slow=head;
                while(fast!=NULL && fast->next!=NULL)
                {   
                    if(fast==slow)
                    {
                        return slow;
                    }
                    fast=fast->next;
                    slow=slow->next;
                }
            }
    }
    return NULL;
}