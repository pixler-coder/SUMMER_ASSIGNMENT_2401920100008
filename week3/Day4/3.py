from typing import List

class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        left_less = [-1] * n
        right_less = [n] * n
        
        stack = []
        for i in range(n):
            while stack and heights[stack[-1]] >= heights[i]:
                stack.pop()
            if stack:
                left_less[i] = stack[-1]
            stack.append(i)

        stack = []
        for i in range(n - 1, -1, -1):
            while stack and heights[stack[-1]] >= heights[i]:
                stack.pop()
            if stack:
                right_less[i] = stack[-1]
            stack.append(i)

        max_area = 0
        for i in range(n):
            width = right_less[i] - left_less[i] - 1
            current_area = heights[i] * width
            max_area = max(max_area, current_area)
            
        return max_area