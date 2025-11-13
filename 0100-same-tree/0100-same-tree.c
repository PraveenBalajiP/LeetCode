/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void preorder(struct TreeNode *root,int *arr,int *i)
{
    if(root==NULL)
    {
        arr[(*i)++]=-999;
        return;
    }
    arr[(*i)++]=root->val;
    preorder(root->left,arr,i);
    preorder(root->right,arr,i);
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    int *a=(int*)malloc(sizeof(int)*1000);
    int *b=(int*)malloc(sizeof(int)*1000);
    int count1=0,count2=0;
    preorder(p,a,&count1);
    preorder(q,b,&count2);
    if(count1!=count2)
        return 0;
    for(int i=0;i<count1;i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}