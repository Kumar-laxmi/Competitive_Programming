# 53. Maximum Subarray
# Difficulty: Medium

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = currentSum = nums[0]
        
        for i in range(1,len(nums)):
            currentSum = max(nums[i],currentSum + nums[i])
            maxSum = max(currentSum,maxSum)
        return maxSum
