/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int pos=count-n;
    int i=0;
    struct ListNode *dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val=0;
    dummy->next=head;
    temp=dummy;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    struct ListNode *t=temp->next;
    temp->next=temp->next->next;
    free(t);
    return dummy->next;
}