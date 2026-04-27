/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* newnode(int val){
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}
struct TreeNode* build(int *nums, int st, int end){
    if(st > end) return NULL;

    int mid = st + (end-st)/2;

    struct TreeNode *root = newnode(nums[mid]);

    root->left = build(nums, st, mid-1);
    root->right = build(nums, mid+1, end);

    return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return build(nums, 0, numsSize-1);
}
