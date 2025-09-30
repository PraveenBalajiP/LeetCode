/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int *arr=(int*)calloc(count,sizeof(int));
    temp=head;
    int k=0;
    while(temp!=NULL)
    {
        struct ListNode *temp2=temp->next;
        while(temp2!=NULL)
        {
            if(temp2->val>temp->val)
            {
                arr[k]=temp2->val;
                break;
            }
            temp2=temp2->next;
        }
        k++;
        temp=temp->next;  
    }
    *returnSize=count;
    return arr;
}