# 151. Reverse Words in a String
# Difficulty: Medium

class Solution:
    def reverseWords(self, s: str) -> str:
        words = [item for item in s.split()]
        words.reverse()
        return " ".join(words)
