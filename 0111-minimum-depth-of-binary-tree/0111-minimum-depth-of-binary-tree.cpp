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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left=minDepth(root->left);
        int right=minDepth(root->right);
         // If one of the children is null, take the non-zero branch
        if (root->left == nullptr || root->right == nullptr) {
            return 1 + max(left, right);
        }

        // If both children exist, take the minimum
        return 1 + min(left, right);
    }
};