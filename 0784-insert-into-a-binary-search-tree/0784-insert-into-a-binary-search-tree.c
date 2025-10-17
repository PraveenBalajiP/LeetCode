/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void find(struct TreeNode *root,struct TreeNode **loc,struct TreeNode **par,int val)
{
    if(root==NULL)
    {
        *loc=NULL;
        *par=NULL;
        return ;
    }
    if(root->val==val)
    {
        *loc=root;
        *par=NULL;
        return ;
    }
    struct TreeNode *ptr;
    struct TreeNode *ptrsave;
    if(val<root->val)
        ptr=root->left;
    else
        ptr=root->right;
    ptrsave=root;
    while(ptr!=NULL)
    {
        if(ptr->val==val)
        {
            *loc=ptr;
            *par=ptrsave;
            return ;
        }
        ptrsave=ptr;
        if(val<ptr->val)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }
    *loc=NULL;
    *par=ptrsave;
}
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    struct TreeNode *loc,*par;
    find(root,&loc,&par,val);
    struct TreeNode *temp;
    temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val=val;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
        return temp;
    else if(val<par->val)
        par->left=temp;
    else
        par->right=temp;
    return root;
}