from typing import Optional
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        max_sum = float('-inf')
        
        def get_max_gain(node):
            nonlocal max_sum
            if not node:
                return 0
            
            left_gain = max(get_max_gain(node.left), 0)
            right_gain = max(get_max_gain(node.right), 0)
            
            current_path_sum = node.val + left_gain + right_gain

            max_sum = max(max_sum, current_path_sum)
        
            return node.val + max(left_gain, right_gain)
        
        get_max_gain(root)
        return max_sum