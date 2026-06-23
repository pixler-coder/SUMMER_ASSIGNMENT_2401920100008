class Solution {
public:
    void helper(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        
        helper(root->left, result);  // Traverse Left
        result.push_back(root->val); // Visit Root
        helper(root->right, result); // Traverse Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }
};