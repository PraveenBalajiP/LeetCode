/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next=head;
    struct ListNode *temp1=&dummy;
    struct ListNode *temp2=head;
    while(temp2!=NULL && temp2->next!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next->next;
    }
    struct ListNode *t=temp1->next;
    temp1->next=t->next;
    free(t);
    return dummy.next;
}