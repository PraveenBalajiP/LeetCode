/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    struct TreeNode *temp=root;
    struct TreeNode *s[20];
    int top=0;
    s[top]=NULL;
    int sum=0;
    while(temp!=NULL)
    {
        if(temp->right!=NULL)
            s[++top]=temp->right;
        if(temp->left!=NULL)
        {
            temp=temp->left;
            if(temp->left==NULL && temp->right==NULL)
                sum=sum+temp->val;
        }
        else
            temp=s[top--];
    }
    printf("%d",sum);
    return sum;
}