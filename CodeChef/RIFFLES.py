import math
# cook your dish here
def find(x):
   # if x is 0 or not
   return (x and (not(x & (x - 1))) )

for _ in range(int(input())):
    (n,k) = map(int,input().split(' '))
    
    if not find(n):
        k = k % (n-2)
    else:
        k = k % int(math.log(n,2))
    
    lst = list(range(1,n+1))
    
    for x in range(0,k):
        lst = lst[0::2] + lst[1::2]
    
    print(*lst,sep=" ",end="\n")
