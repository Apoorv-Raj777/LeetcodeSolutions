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
    using node = TreeNode;
    // Hypo: - height of a tree
    int maxDepth(TreeNode* root) {
        //Base
        if(root == nullptr)
           return 0;

        //Hypothesis on smaller input
        int lh = maxDepth(root->left);   // height of  left subtree
        int rh = maxDepth(root->right);  // height of  right subtree

        //Induction
        return 1 + max(lh,rh);
    }
};