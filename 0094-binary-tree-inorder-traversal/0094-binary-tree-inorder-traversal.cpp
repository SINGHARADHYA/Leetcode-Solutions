class Solution {
public:
    vector<int> ans;

    void inorder(TreeNode* root) {
        // Base case
        if (root == NULL)
            return;

        // 1. Go Left
        inorder(root->left);

        // 2. Visit Root
        ans.push_back(root->val);

        // 3. Go Right
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};