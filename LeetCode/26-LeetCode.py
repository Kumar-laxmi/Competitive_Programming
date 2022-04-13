# 26. Remove Duplicates from Sorted Array
# Difficulty: Easy

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)==1:
            return 1
        i = 0
        while i<len(nums):
            if i==len(nums)-1:
                break
            elif nums[i]==nums[i+1]:
                nums.pop(i+1)
            else:
                i = i + 1
        return len(nums)
