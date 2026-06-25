class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        calculateDepth(root, maxDiameter);
        return maxDiameter;
    }

private:
    int calculateDepth(TreeNode* node, int& maxDiameter) {
        if (node == nullptr) {
            return 0;
        }

        int leftDepth = calculateDepth(node->left, maxDiameter);
        int rightDepth = calculateDepth(node->right, maxDiameter);
        maxDiameter = std::max(maxDiameter, leftDepth + rightDepth);
        return 1 + std::max(leftDepth, rightDepth);
    }
};