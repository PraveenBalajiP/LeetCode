/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *start=NULL;
struct ListNode *create(int value)
{
    struct ListNode *temp=NULL,*p=NULL;
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=value;
    temp->next=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        p=start;
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;
    }
    return start;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *temp;
    struct ListNode *head=NULL;
    start=NULL;
    temp=l1;
    struct ListNode *prev=NULL,*next=NULL;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    struct ListNode *n1=prev;
    prev=NULL;
    next=NULL;
    temp=l2;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    struct ListNode *n2=prev;
    struct ListNode *temp1=n1,*temp2=n2;
    int carry=0;
    while(temp1!=NULL && temp2!=NULL)
    {
        int sum,d;
        sum=temp1->val+temp2->val+carry;
        carry=sum/10;
        d=sum%10;
        head=create(d);
        temp1=temp1->next;
        temp2=temp2->next;
    }
        if(temp2==NULL)
        {
            while(temp1!=NULL)
            {
                int sum,d;
                sum=temp1->val+carry;
                carry=sum/10;
                d=sum%10;
                head=create(d);
                temp1=temp1->next;
            }
        }
        else if(temp1==NULL)
        {
            while(temp2!=NULL)
            {
                int sum,d;
                sum=temp2->val+carry;
                carry=sum/10;
                d=sum%10;
                head=create(d);
                temp2=temp2->next;
            }
        }
        if(carry!=0)
            head=create(carry);
    temp=head;
    prev=NULL;next=NULL;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}