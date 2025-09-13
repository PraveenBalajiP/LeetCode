/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *temp=node;
    struct ListNode *temp1=node->next;
    temp->val=temp1->val;
    temp->next=temp1->next;
    free(temp1);
}