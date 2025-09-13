/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp1;
    struct ListNode *temp2;
    struct ListNode dummy;
    dummy.next=head;
    head=&dummy;
    temp1=head;
    while(temp1->next!=NULL)
    {
       temp2=temp1;
       temp1=temp1->next;
       if(temp1->next!=NULL && temp1->val==temp1->next->val)
       {
            int val=temp1->val; 
            struct ListNode *t=temp1;
            struct ListNode *tt;
            while(t!=NULL && t->val==val)
            {
                tt=t;
                t=t->next;
                free(tt);
            }
            temp2->next=t;
            temp1=temp2;
       }
    }
    return head->next;
}