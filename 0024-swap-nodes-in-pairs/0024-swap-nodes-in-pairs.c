/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *temp1,*temp2;
    temp1=head;
    if(head==NULL)
        return head;
    else if(head->next==NULL)
        return head;
    while(temp1!=NULL && temp1->next!=NULL)
    {
        temp2=temp1;
        temp1=temp1->next;
        int value=temp2->val;
        temp2->val=temp1->val;
        temp1->val=value;
        temp1=temp1->next;
    }
    return head;
}