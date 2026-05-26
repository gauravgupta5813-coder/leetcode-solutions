/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* createNode(int value) {

    struct TreeNode* newNode =
        (struct TreeNode*)malloc(sizeof(struct TreeNode));

    newNode->val = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void solve(struct TreeNode* root , int val, int depth){
    if(root == NULL) return;

    if(depth == 2){
        struct TreeNode * temp1 = root->left;
    struct TreeNode * temp2 = root->right;

    root->left = createNode(val);
    root->right = createNode(val);

    root->left->left = temp1;
    root->right->right = temp2;

    return;
    }

    solve(root->left, val, depth-1);
    solve(root->right, val, depth-1);
}
struct TreeNode* addOneRow(struct TreeNode* root, int val, int depth) {
    if(depth == 1){
        struct TreeNode *newnode = createNode(val);
        newnode->left = root;

        return newnode;
    }
    solve(root, val, depth);
    return root;
}
