t = int(input())

while t>0:
    s = input()
    n = len(s)
    
    if n % 2 == 0:
        s1 = s[:n//2]
        s2 = s[n//2: ]
    else:
        s1 = s[:n//2]
        s2 = s[n//2+1:]
    
    l1 = list(s1)
    l2 = list(s2)
    
    l1.sort()
    l2.sort()
    
    if str(l1) == str(l2):
        print("YES")
    else:
        print("NO")
        
    
    t -= 1
