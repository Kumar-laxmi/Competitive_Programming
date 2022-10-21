# 169. Majority Element
# Difficulty: Easy

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        unique = set(nums)
        n = len(nums)
        
        for i in unique:
            if nums.count(i) > n//2:
                return i
        return -1
