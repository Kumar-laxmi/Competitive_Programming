# 378. Kth Smallest Element in a Sorted Matrix
# Difficulty: Medium

class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        SortedList = []
        for i in range(0,len(matrix[0])):
            for j in range(0,len(matrix[0])):
                SortedList.append(matrix[i][j])
                
        SortedList.sort()
        
        
        return SortedList[k-1]
