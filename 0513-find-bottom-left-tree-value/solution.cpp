/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int  maxDepth = -1;
    int bottomleftValue = 0;

    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
        return bottomleftValue;
    }

private:
    void dfs(TreeNode* node,  int depth){
        if(node == nullptr) return;

        if(depth > maxDepth){
            maxDepth = depth;
            bottomleftValue = node->val;
        }
        dfs(node->left, depth + 1);
        dfs(node->right, depth + 1);
    }
};
