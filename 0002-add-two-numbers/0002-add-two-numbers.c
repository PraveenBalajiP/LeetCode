/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* temp1,*temp2;
    temp1=l1;
    temp2=l2;
    int count1=0,count2=0;
    while(temp1!=NULL)
    {
        count1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        count2++;
        temp2=temp2->next;
    }
    if(count1>count2)
    {
        struct ListNode* t;
        t=l2;
        while(t->next!=NULL)
            t=t->next;
        for(int i=0;i<count1-count2;i++)
        {
            struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
            t->next=temp;
            temp->val=0;
            temp->next=NULL;
            t=temp;
        }
    }
    if(count1<count2)
    {
        struct ListNode* t;
        t=l1;
        while(t->next!=NULL)
            t=t->next;
        for(int i=0;i<count2-count1;i++)
        {
            struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
            t->next=temp;
            temp->val=0;
            temp->next=NULL;
            t=temp;
        }
    }
    temp1=l1;
    temp2=l2;
    struct ListNode* start=NULL,*p=NULL;
    int left=0;
    while(temp1!=NULL)
    {
        struct ListNode *t=(struct ListNode*)malloc(sizeof(struct ListNode));
        int sum=temp1->val+temp2->val+left;
        int right=sum%10;
        t->val=right;
        t->next=NULL;
        left=sum/10;
        if(start==NULL)
            start=t;
        else
        {
            p=start;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=t;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    struct ListNode *temp=start;
    if(left==1)
    {
        struct ListNode* n=(struct ListNode*)malloc(sizeof(struct ListNode));
        n->val=1;
        n->next=NULL;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    return start;
}