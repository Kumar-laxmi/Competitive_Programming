# 62. Unique Paths
# Difficulty: Medium

import math

class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        return math.comb(m + n - 2, n - 1)
