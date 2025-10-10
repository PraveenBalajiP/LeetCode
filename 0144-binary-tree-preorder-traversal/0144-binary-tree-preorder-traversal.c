/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    struct TreeNode *s[20];
    s[0]=NULL;
    struct TreeNode *ptr=root;
    int top=0;
    int *p=(int *)malloc(100*sizeof(int));
    int i=0;
    while(ptr!=NULL)
    {
        p[i++]=ptr->val;
        if(ptr->right!=NULL)
            s[++top]=ptr->right;
        if(ptr->left!=NULL)
            ptr=ptr->left;
        else
            ptr=s[top--];
    }
    *returnSize=i;
    return p;
}