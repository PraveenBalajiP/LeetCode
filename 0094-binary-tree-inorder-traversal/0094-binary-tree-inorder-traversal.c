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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *p=(int*)malloc(100*sizeof(int));
    int i=0;
    int top=0;
    struct TreeNode *s[20];
    s[0]=NULL;
    struct TreeNode *ptr=root;
    while(ptr!=NULL)
    {
        while(ptr!=NULL)
        {
            s[++top]=ptr;
            ptr=ptr->left;
        }
        ptr=s[top--];
        while(ptr!=NULL)
        {
            p[i++]=ptr->val;
            if(ptr->right!=NULL)
            {
                ptr=ptr->right;
                while(ptr!=NULL)
                {
                    s[++top]=ptr;
                    ptr=ptr->left;
                }
            }
            ptr=s[top--];
        }
    }
    *returnSize=i;
    return p;   
}