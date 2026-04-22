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
    int *arr = (int*) malloc(100*sizeof(int));
    int i=0;
    if (root == NULL)
    {
        *returnSize = 0;
        return arr;
    }
    void Traversal(struct TreeNode* root){
        if(root != NULL && root->left != NULL){
        Traversal(root->left);}
        if(root != NULL){
        arr[i++] = root->val;}
        if(root != NULL && root->right != NULL){
        Traversal(root->right);}
    }
    Traversal(root);
    *returnSize = i;
    return arr;
}
