# 1323. Maximum 69 Number
# Difficulty: Easy

class Solution:
    def maximum69Number (self, num: int) -> int:
        s = str(num)
        s = s.replace("6", "9", 1)
        return int(s)
