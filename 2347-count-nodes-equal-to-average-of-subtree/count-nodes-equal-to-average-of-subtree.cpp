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
    int ans =0;
    int sum(TreeNode* root){
        if(root== nullptr)
           return 0;

        return root->val + sum(root->left) + sum(root->right);
    }
    int count(TreeNode* root){
        if(root== nullptr)
           return 0;

        return 1 + count(root->left) + count(root->right);
    }

    int averageOfSubtree(TreeNode* root) {
        if(root== nullptr)
           return 0;

        int s  = sum(root);
        int c = count(root);

        if(s/c == root->val)
           ans++;

        averageOfSubtree(root->left);
        averageOfSubtree(root->right);

        return ans;
    }
};