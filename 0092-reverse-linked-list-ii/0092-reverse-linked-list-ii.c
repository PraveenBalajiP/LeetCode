/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode *temp;
    struct ListNode *dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    if(head==NULL || left==right)
        return head;
    temp=dummy;
    for(int i=1;i<left;i++)
    {
        temp=temp->next;
    }
    struct ListNode *prev=NULL,*current=temp->next,*next;
    struct ListNode *start=current;
    for(int i=0;i<right-left+1;i++)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    temp->next=prev;
    start->next=current;
    return dummy->next;
}