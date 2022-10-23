t = int(input())

while t>0:
    n = int(input())
    arr = [int(item) for item in input().split()]
    
    unique = set(arr)
    freq = [arr.count(i) for i in unique]
    
    if freq.count(max(freq)) > 1:
        print("NO")
    else:
        print("YES")
    
    t -= 1
