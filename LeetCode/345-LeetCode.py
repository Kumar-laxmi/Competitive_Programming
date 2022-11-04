# 345. Reverse Vowels of a String 
# Difficulty: Easy

class Solution:
    def reverseVowels(self, s: str) -> str:
        char = list(s)
        i = 0
        j = len(char) - 1

        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

        while i < j:
            if char[i] not in vowels:
                i += 1
            if char[j] not in vowels:
                j -= 1
            
            if (char[i] in vowels) and (char[j] in vowels):
                char[i], char[j] = char[j], char[i]
                i += 1
                j -= 1
        
        return "".join(char)
