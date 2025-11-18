/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int i;
void inorder(struct TreeNode *root,int *arr)
{
    if(root!=NULL)
    {
        inorder(root->left,arr);
        arr[i++]=root->val;
        inorder(root->right,arr);
    }
}
int kthSmallest(struct TreeNode* root, int k) {
    i=0;
    int *arr=(int*)malloc(sizeof(int)*10000);
    inorder(root,arr);
    return arr[k-1];
}