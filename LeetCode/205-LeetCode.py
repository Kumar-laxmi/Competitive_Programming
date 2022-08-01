# 205. Isomorphic Strings
# Difficulty: Easy

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        pattern = {}
        for (i, j) in zip(list(s),list(t)):
            if i not in pattern:
                if j not in pattern.values():
                    pattern[i] = j
                else:
                    return False
            elif i in pattern and pattern[i]!=j:
                return False
        return True
                
