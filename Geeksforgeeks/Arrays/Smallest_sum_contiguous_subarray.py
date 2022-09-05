
class Solution:
    def smallestSumSubarray(self, A, N):
        minSum = currentSum = A[0]
        
        for i in range(1,N):
            currentSum = min(A[i], currentSum + A[i]) 
            minSum = min(minSum, currentSum)
        return minSum
