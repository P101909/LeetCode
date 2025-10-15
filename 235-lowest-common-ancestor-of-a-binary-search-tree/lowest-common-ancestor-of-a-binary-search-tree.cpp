/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // Have a copy of the root
        TreeNode* root_copy = root;
        // Base case: If one of the nodes is the root
        if (root_copy == p || root_copy == q)
            return root_copy;
        
        // Reusicve case:
        // If root is in the middle of the two, it is the LCA
        if ( (root -> val < p -> val && root -> val > q -> val) || (root -> val > p -> val && root -> val < q -> val) )
            return root;
        // If not go the left subtree if both q and p are less than root
        if ( (q -> val < root -> val)  && (p -> val < root -> val) )
            root_copy = root -> left;
        // Otherwise go the right 
        else
            root_copy  =  root -> right;
        
        return lowestCommonAncestor(root_copy, p, q);
    }
};