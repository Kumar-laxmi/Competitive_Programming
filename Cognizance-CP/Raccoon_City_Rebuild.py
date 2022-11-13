t = int(input())

while t > 0:
    (n, i) = map(int, input().split(' '))
    height = [int(item) for item in input().split()]
    
    l = i
    r = n - i - 1
    cl = cr = 0
    
    result = []
    result.append(max(height))
    flag = False
    height.remove(max(height))
    
    # flag = False <- Switching to right list
    # flag = True <- Switching to left list
    while len(height) != 0:
        if flag == False:
            if cr < r:
                result.append(max(height))
                height.remove(max(height))
                cr += 1
                flag = True
            else:
                result.insert(0, max(height))
                height.remove(max(height))
                cl += 1
        else:
            if cl < l:
                result.insert(0, max(height))
                height.remove(max(height))
                cl += 1
                flag = False
            else:
                result.append(max(height))
                height.remove(max(height))
                cr += 1
    print(" ".join(list(map(str, result))))
    
    t -= 1
