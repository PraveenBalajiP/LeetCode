/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode*temp;
    temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->val==temp->next->val)
        {
            struct ListNode *t;
            t=temp->next;
            temp->next=t->next;
            free(t);
        }
        else
            temp=temp->next;
    }
    return head;
}