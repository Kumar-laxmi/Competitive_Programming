# Find Duplicates in Array

class Solution:
    def duplicates(self, arr, n): 
        res = []
        count = {}
        for item in arr:
            if item in count:
                count[item]+=1
            else:
                count[item]=1
        
        for k,v in count.items():
            if v > 1:
                res.append(k)
        
        if len(res)==0:
            res.append(-1)
        else:
            res.sort()
        
        return res
