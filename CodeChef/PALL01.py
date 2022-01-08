# method definition
def rev(num):
    sum = 0
    while num!=0:
        sum = sum*10 + num%10
        num = int(num/10)
    
    return sum

# main method definition
t = int(input())
for i in range(0,t):
    n = int(input())
    if n==rev(n):
        print("wins")
    else:
        print("loses")
