# cook your dish here
t = int(input())

for i in range(0,t):
    n,d = [int(x) for x in input().split()]
    count = 1
    mul = 2
    
    flag = 0
    
    for j in range(1,d+1):
        count = count * mul
        if count>=n:
            print(n)
            flag=1
            break
        if j>=10:
            mul=3
    if flag==0:
        print(count)
