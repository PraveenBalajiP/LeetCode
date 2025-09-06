/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *tempA=headA;
    struct ListNode *tempB=headB;
    while(tempA!=NULL)
    {
        while(tempB!=NULL)
        {
            if(tempA==tempB)
                return tempB;
            tempB=tempB->next;
        }
        tempA=tempA->next;
        tempB=headB;
    }
    return 0;
}