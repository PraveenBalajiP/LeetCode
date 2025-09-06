/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int count=0,i=0,c=0;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int p[count];
    temp=head;
    while(temp!=NULL)
    {
        p[i]=temp->val;
        i++;
        temp=temp->next;
    }
    int reverse[count];
    int j=0;
    for(int i=count-1;i>=0;i--)
    {
        reverse[j]=p[i];
        j++;
    }
    for(int i=0;i<count;i++)
    {
        if(p[i]==reverse[i])
            c++;
    }
    if(c==count)
        return 1;
    else
        return 0;
}