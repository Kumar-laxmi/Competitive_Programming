for _ in range(int(input())):
    s = input()
    n = len(s)
    if n  == 1 :
        print("No")
        continue
    count  = 0 
    pos  = -1
    i  = 0
    while (i<n):
        if s[i] == '1':
            count  += 1
            pos = i+1
        i+=1
    if count == 0 or (count  ==1 and pos == n):
        print("No")
    else:
        print("Yes")
