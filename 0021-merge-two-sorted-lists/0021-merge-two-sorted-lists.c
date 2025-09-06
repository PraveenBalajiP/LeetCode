/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==NULL)
        return list2;
    if(list2==NULL)
        return list1;
    struct ListNode *temp=list1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=list2;
    struct ListNode *temp1=list1;
    struct ListNode *temp2=list1;
    while(temp1!=NULL)
    {
        while(temp2->next!=NULL)
        {
            if(temp2->val>temp2->next->val)
            {
                int t=temp2->val;
                temp2->val=temp2->next->val;
                temp2->next->val=t;
            }
            temp2=temp2->next;
        }
        temp2=list1;
        temp1=temp1->next;
    }
    return list1;
}