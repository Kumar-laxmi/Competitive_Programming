t = int(input())

while t > 0:
    (n, x) = map(int, input().split(' '))
    s = input()
    
    unique = []
    unique.append(x)
    
    for i in s:
        if i == 'R':
            x += 1
            if x not in unique:
                unique.append(x)
        elif i == 'L':
            x -= 1
            if x not in unique:
                unique.append(x)
        else:
            x += 0
    
    print(len(set(unique)))
    
    
    t -= 1
