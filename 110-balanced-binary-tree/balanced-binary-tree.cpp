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
    bool isBalanced(TreeNode* root) {

        // Base Case:
        if ((root == nullptr) || ( root->right == nullptr && root->left == nullptr))
            return true;

        // Recursive Case
        int max_depth_left = maxDepth(root->left);
        int max_depth_right = maxDepth(root->right);
        if (abs(max_depth_left - max_depth_right) > 1)
            return false;
        else
            return (isBalanced(root->left) && isBalanced(root->right));;
    };

    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        else
            return (1 + max (maxDepth(root->left), maxDepth(root->right)));
    }
};