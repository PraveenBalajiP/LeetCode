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
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *temp=head;
    struct ListNode *head1=NULL,*head2=NULL;
    int i=1;
    while(temp!=NULL)
    {
        if(i%2==0)
            head1=create(head1,temp->val);
        else if(i%2!=0)
            head2=create(head2,temp->val);
        temp=temp->next;
        i++;
    }
    if(head1==NULL)
        return head2;
    else if(head2==NULL)
        return head1;
    temp=head2;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head1;
    return head2;
}