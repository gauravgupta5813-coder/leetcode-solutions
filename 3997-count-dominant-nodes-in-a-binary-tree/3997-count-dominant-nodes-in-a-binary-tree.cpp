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
    int traversal(TreeNode* root, int &count){
        if(root == nullptr) return 0;
        
        int leftMax = traversal(root->left, count);
        int rightMax = traversal(root->right, count);

        int currSubtreeMax = max({root->val, leftMax, rightMax});
        
        if(root->val == currSubtreeMax) count++;
        return currSubtreeMax;
    }
    int countDominantNodes(TreeNode* root) {
        int count = 0;
        traversal(root, count);
        return count;
    }
};