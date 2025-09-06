/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp=head;
    int count=0;
    int i=0,middle;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("%d",count);
    middle=(count/2)-1;
    temp=head;
    while(i<=middle)
    {
        temp=temp->next;
        i++;
    }
    head=temp;
    return head;
}