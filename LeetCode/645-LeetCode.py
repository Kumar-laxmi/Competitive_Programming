# 645. Set Mismatch
# Difficulty: Easy

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        result = []
        maxElement = len(nums)
        unique = set(nums)

        for i in unique:
            if nums.count(i) > 1:
                result.append(i)
                break
        
        for i in range(1, maxElement + 1):
            if i not in unique:
                result.append(i)
                break
        return result
