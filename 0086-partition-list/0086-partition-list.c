/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode *create(struct ListNode *head,int value)
 {
    struct ListNode *temp=NULL,*p=NULL;
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=value;
    temp->next=NULL;
    if(head==NULL)
        return temp;
    else
    {
        p=head;
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;
    }
    return head;
 }
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode *temp=head;
    struct ListNode *head1=NULL,*head2=NULL;
    struct ListNode *start=NULL;
    while(temp!=NULL)
    {
        if(temp->val<x)
            head1=create(head1,temp->val);
        else
            head2=create(head2,temp->val);
        temp=temp->next;
    }
    if(head1==NULL)
        return head2;
    else if(head2==NULL)
        return head1;
    temp=head1;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head2;
    return head1;
}