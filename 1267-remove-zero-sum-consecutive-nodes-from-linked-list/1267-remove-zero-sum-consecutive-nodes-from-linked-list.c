/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next=head;
    int sum=0;
    struct ListNode *temp1=&dummy;
    while(temp1!=NULL)
    {
        struct ListNode *temp2=temp1->next;
        while(temp2!=NULL)
        {
            sum=sum+temp2->val;
            if(sum==0)
            {
                temp1->next=temp2->next;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
        sum=0;
    }
    return dummy.next;
}