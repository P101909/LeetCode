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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr)
            return 0;
        // Dimater can be the height of the left and right subtree
        // Keep comparing between each nodes and its subtrees for the max diamter
        int d = maxDepth(root->left) + maxDepth(root->right);
        int d_left = diameterOfBinaryTree(root->left);
        int d_right = diameterOfBinaryTree(root->right);
        return max({d, d_right, d_left});
    };

    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        else
            return (1 + max (maxDepth(root->left), maxDepth(root->right)));
    }
};