# 838. Push Dominoes
# Difficulty: Medium

class Solution:
    def pushDominoes(self, dominoes: str) -> str:
        temp = '';
        
        while temp != dominoes:
            temp = dominoes
            
            dominoes = dominoes.replace('R.L', 'xxx')
            dominoes = dominoes.replace('.L', 'LL')
            dominoes = dominoes.replace('R.', 'RR')
        
        dominoes = dominoes.replace('xxx', 'R.L')
        
        return dominoes.replace('xxx', 'R.L')
