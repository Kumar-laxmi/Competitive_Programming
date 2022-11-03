n = int(input())

a = [item for item in input().split()]

for i in range(0,len(a)):
    if a[i] == 'f':
        print(i)
        break
    else:
        continue
