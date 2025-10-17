/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    struct TreeNode *location;
    if(root==NULL)
    {
        location=NULL;
        return location;
    }
    if(root->val==val)
    {
        location=root;
        return location;
    }
    struct TreeNode *ptr;
    if(val<root->val)
        ptr=root->left;
    else
        ptr=root->right;
    while(ptr!=NULL)
    {
        if(ptr->val==val)
        {
            location=ptr;
            return location;
        }
        if(val<ptr->val)
            ptr=ptr->left;
        else
        ptr=ptr->right;
    }
    return NULL;
}