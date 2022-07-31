# 724. Find Pivot Index
# Difficulty: Easy

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        left = 0
        
        for i in range(0,len(nums)):
            right = total - left - nums[i]
            
            if left == right:
                return i
            left+=nums[i]
        return -1
