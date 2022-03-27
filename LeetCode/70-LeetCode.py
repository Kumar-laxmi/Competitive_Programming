# 70. Climbing Stairs
# Difficulty: Easy

class Solution:
    def climbStairs(self, n):
        a = 0
        b = 1
        while (n):
            c = a+b
            a,b = b,c
            n -= 1
        return c
