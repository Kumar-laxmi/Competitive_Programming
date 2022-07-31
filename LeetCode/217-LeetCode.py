# 217. Contains Duplicate
# Difficulty: Easy

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        n = len(nums)
        for i in range(1,n):
            if nums[i-1]==nums[i]:
                return True
        return False
