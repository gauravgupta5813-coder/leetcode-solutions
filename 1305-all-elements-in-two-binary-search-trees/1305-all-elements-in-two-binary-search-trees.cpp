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
    void Inorder(TreeNode* root, vector<int>&arr){
        if(root==nullptr) return;

        Inorder(root->left, arr);
        arr.push_back(root->val);
        Inorder(root->right, arr);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> arr;

        Inorder(root1,arr);
        Inorder(root2,arr);
        sort(arr.begin(), arr.end());
        return arr;
    }
};