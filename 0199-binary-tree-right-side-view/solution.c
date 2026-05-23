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

 void solve(int *arr , int level , struct TreeNode * root,int *returnSize){
    if(root == NULL) return;

    if(level == *returnSize){
        arr[*returnSize] = root->val;
        (*returnSize)++;
    }

    solve(arr, level+1, root->right, returnSize); 
    solve(arr, level+1, root->left, returnSize); 
 }

int* rightSideView(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int *arr = (int*)malloc(100 * sizeof(int));

    solve(arr, 0 , root, returnSize);
    return arr;
}
