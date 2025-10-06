/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //Base case
        if (root == nullptr)
            return root;
        //Do the swapping
        TreeNode* temp = nullptr;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        // Recursive Case
        invertTree(root->left);
        invertTree(root->right);
        return root;
    };
};