/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp=head;
    struct ListNode *t=NULL,*p=NULL,*start=NULL;
    while(temp!=NULL)
    {
        if(temp->val!=val)
        {
            t=(struct ListNode*)malloc(sizeof(struct ListNode));
            t->val=temp->val;
            t->next=NULL;
            if(start==NULL)
            {
                start=t;
            }
            else
            {
                p=start;
                while(p->next!=NULL)
                    p=p->next;
                p->next=t;
            }
        }
        temp=temp->next;
    }
    return start;
}