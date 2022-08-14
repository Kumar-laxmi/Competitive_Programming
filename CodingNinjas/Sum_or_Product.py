def sumOrProduct(n, q):
    sum = 0
    prod = 1
    m = 10**9 + 7
    
    if q == 1:
        for i in range(1,n+1):
            return int(n*(n+1)/2)%m
    elif q == 2:
        for i in range(1,n+1):
            prod*=i
        return prod%m
    
