/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    struct ListNode *temp;
    struct ListNode *fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    struct ListNode *prev=NULL,*current=slow->next,*next;

    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    slow->next=NULL;
    //prev is now the head of the reversed linked list(middle to end)
    //head is now the head of the normal linked list(0 to middle)
    struct ListNode *temp1=head,*temp2=prev;
    struct ListNode *t1=temp1,*t2=temp2;
    //--------------//
    while(temp2!=NULL)
    {
        struct ListNode* next1 = temp1->next;
        struct ListNode* next2 = temp2->next;

        temp1->next = temp2;     // link first → second
        if (next1 == NULL) break;
        temp2->next = next1;     // link second → next of first

        temp1 = next1;           // move to next first  
        temp2 = next2;           // move to next second
//--------------------//
    }
}