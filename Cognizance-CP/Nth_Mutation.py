def mutation(n):
    sum = 0
    while n > 0:
        sum += (n % 10)
        n //= 10
    return sum

(k, n) = map(int, input().split(' '))
arr = [int(item) for item in input().split()]

d = {}

for i in range(0,n):
    if arr[i] not in d and mutation(arr[i]) not in d.values():
        d[arr[i]] = mutation(arr[i])
    else:
        continue

# sorting dictionary by their values
d = {key:value for key,value in sorted(d.items(), key = lambda x:x[1])}

count = 1
flag = False
for key,value in d.items():
    if count == k:
        print(key)
        flag = True
    count += 1

if flag == False:
    print("-1")
