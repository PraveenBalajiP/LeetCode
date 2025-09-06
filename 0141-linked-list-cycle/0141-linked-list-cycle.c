/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    while(1)
    {
        if(fast==NULL || fast->next==NULL)
            return 0;
        fast=fast->next->next;
        slow=slow->next;
         if(fast==slow)
        {
            return 1;
        }
    }
    return 0;
}