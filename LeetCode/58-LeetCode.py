# 58. Length of Last Word
# Difficulty: Easy

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lst = s.split()
        length = len(lst)
        lenLast = len(lst[length-1])
        return lenLast
