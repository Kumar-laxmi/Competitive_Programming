def Sum(s,n):
    result = 0
    for i in s:
        result += ord(i) * (10**n)
        n -= 1
    return result
        

t = int(input())

while t>0:
    l = int(input())
    s = input()
    n = int(input())
    
    lst = []
    for i in range(0,l,n):
        lst.append(s[i:i+n])
    
    result = 0
    for i in lst:
        result += Sum(i,n)
    print(result//10)
    
    
    
    t -= 1
