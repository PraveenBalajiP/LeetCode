/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int left;
    int right;
    if(root==NULL)
        return 0;
    left=maxDepth(root->left);
    right=maxDepth(root->right);
    return 1+(left>right?left:right);
}