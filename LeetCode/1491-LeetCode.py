# 1491. Average Salary Excluding the Minimum and Maximum Salary
# Difficulty: Easy

class Solution:
    def average(self, salary: List[int]) -> float:
        if len(salary)<=2:
            return float(0)
        min = salary[0]
        max = salary[0]
        sum = 0
        
        for i in range(0,len(salary)):
            if salary[i]>max:
                max = salary[i]
            if salary[i]<min:
                min = salary[i]
            
            sum = sum + salary[i]
            
        return float((sum-max-min)/(len(salary)-2))
