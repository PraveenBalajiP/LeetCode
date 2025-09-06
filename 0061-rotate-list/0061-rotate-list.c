/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *temp=head;
    int count=1,i=0;
    if(head==NULL || head->next==NULL)
        return head;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    temp->next=head;
    //-----------------//
    k=k%count;
    if(k==0)
    {
        temp->next=NULL;
        return head;
    }
    //----------------//
    int num=count-k;
    temp=head;
    while(i<num-1)
    {
        temp=temp->next;
        i++;
    }
    head=temp->next;
    temp->next=NULL;
    return head;
}