# 1832. Check if the Sentence Is Pangram
# Difficulty: Easy

class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
                    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                    'u', 'v', 'w', 'x', 'y' ,'z']
        
        for i in sentence:
            if i in alphabet:
                alphabet.remove(i)
        
        if len(alphabet) == 0:
            return True
        else:
            return False
