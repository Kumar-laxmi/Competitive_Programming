t = int(input())

while t > 0:
    n = int(input())
    print(bin(n ^ (n >> 1))[2:])
    
    t -= 1
